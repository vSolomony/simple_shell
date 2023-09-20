#include "shell.h"
/**
 * to_exec_command - a function that execute commands
 * @the_command: a pointer of commands strings
 * @args: the arguments that will be passed to execve
 * Return: the exit status
*/
int to_exec_command(const char *the_command, char *const args[])
{
	pid_t pid = fork();
	int status;

	if (pid < 0)
	{
		perror("faild to load fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(the_command, args, NULL) == -1)
		{
			perror("Could'nt use execve!");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (waitpid(pid, &status, 0) == -1)
		{
			perror("waiting the child");
			exit(EXIT_FAILURE);
		}
		return (status);
	}
	return (0);
}
