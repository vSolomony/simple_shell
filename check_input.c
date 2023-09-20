#include "shell.h"
/**
 * check_input - to check the input and tokenize
 * @line: the string line
 * Return: nothing
*/
void check_input(char *line)
{
	char *args[128];
	char *token = strtok(line, " ");
	int arg_index = 0;

	if (_strlen(line) == 0)
	{
		free(line);
		return;
	}

	while (token != NULL)
	{
		args[arg_index] = token;
		arg_index++;
		token = strtok(NULL, " ");
	}

	args[arg_index] = NULL;

	to_exec_command(args);
	free(line);
}
