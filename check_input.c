#include "shell.h"
/**
 * check_input - to check the input and tokenize
 * @line: the string line
 * Return: nothing
*/
void check_input(char *line)
{
	char *args[128];
	char *token;
	int arg_index = 0;

	if (line == NULL)
	{
		return;
	}

	token = strtok(line, " ");
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

	free(line);
}
