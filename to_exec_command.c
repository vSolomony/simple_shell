#include "shell.h"
/**
 * to_exec_command - a function that execute commands
 * @the_command: a pointer of commands strings
 * Return: the exit status
*/
int to_exec_command(const char *the_command)
{
	pid_t pid = fork();
	int status;
	char *const argv[] = {NULL};

	if (pid < 0)
	{
		perror("faild to load fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(the_command, argv, NULL) == -1)
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
