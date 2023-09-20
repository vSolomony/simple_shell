#include "shell.h"
/**
 * noninteractive_SHELLMODE - the noninteractive mode in shell
 * Return: nothing
*/
void noninteractive_SHELLMODE(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t to_read;
	char *args[128];
	char *token;
	int arg_index;

	while ((to_read = getline(&line, &len, stdin)) != -1)
	{
		if (line[to_read - 1] == '\n')
		{
			line[to_read - 1] = '\0';
		}

		if (_strlen(line) > 0)
		{
			token = strtok(line, " ");
			arg_index = 0;

			while (token != NULL)
			{
				args[arg_index] = token;
				arg_index++;
				token = strtok(NULL, " ");
			}

			args[arg_index] = NULL;

			if (arg_index > 0)
			{
				to_exec_command(args);
			}
		}
	}

	free(line);
}
