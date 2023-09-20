#include "shell.h"
/**
 * noninteractive_SHELLMODE - the noninteractive mode in shell
 * Return: nothing
*/
void noninteractive_SHELLMODE(void)
{
	char *args[128];
	char *line = NULL;
	size_t len = 0;
	ssize_t to_read;
	char *token;
	int arg_index;

	while ((to_read = getline(&line, &len, stdin)) != -1)
	{
		if (line[to_read - 1] == '\n')
		{
			line[to_read - 1] = '\0';
		}

		if (_strlen(line) == 0)
		{
			continue;
		}
		token = _strtok(line, " ");
		arg_index = 0;

		while (token != NULL)
		{
			args[arg_index] = token;
			arg_index++;
			token = _strtok(NULL, " ");
		}

		args[arg_index] = NULL;
		to_exec_command((const char **)args);
	}

	free(line);
}
