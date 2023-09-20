#include "shell.h"
/**
 * to_read_command - function that read the commands
 * Return: the line
*/
char *to_read_command(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t to_read;

	to_print("Solomony_Shell$ ");
	to_read = getline(&line, &len, stdin);

	if (to_read == -1)
	{
		if (feof(stdin))
		{
			to_print("\n");
			free(line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("to get line");
			free(line);
			exit(EXIT_FAILURE);
		}
	}

	if (line[to_read - 1] == '\n')
	{
		line[to_read - 1] = '\0';
	}

	return (line);
}
