#include "shell.h"
/**
 * to_exec_command - a function that execute commands
 * @args: to handle args
 * Return: 0 Success
*/
void to_exec_command(char *args[])
{
    pid_t pid = fork();
    int status;

    if (pid < 0)
    {
        perror("fork has failed");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        if (execve(args[0], args, environ) == -1)
        {
            perror("execve has failed");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        if (waitpid(pid, &status, 0) == -1)
        {
            perror("child has not arrived");
            exit(EXIT_FAILURE);
        }
    }
}
