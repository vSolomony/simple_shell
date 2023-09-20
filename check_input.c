#include "shell.h"
/**
 * check_input - to check the input and tokenaise
 * @line: the string line
 * Return: nothing
*/
void check_input(char *line)
{
	char *args[128];
	char *the_token = _strtok(line, " ");
	int arg_index = 0;

	if (_strlen(line) == 0)
	{
		free(line);
		return;
	}

	while (the_token != NULL)
	{
		args[arg_index] = the_token;
		arg_index++;
		the_token = _strtok(NULL, " ");
	}

	args[arg_index] = NULL;

	to_exec_command((const char **)args);
	free(line);
}
