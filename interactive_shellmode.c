#include "shell.h"
/**
 * interactive_SHELLMODE - interactive mode of shell
 * Return: nothing
*/
void interactive_SHELLMODE(void)
{
	char *line;

	while (1)
	{
		to_print("Solomony_Shell$ ");
		line = to_read_command();
		if (line != NULL)
		{
			if (_strcmp(line, "exit") == 0)
			{
				handle_exit();
			}
			else if (_strcmp(line, "env") == 0)
			{
				handle_env();
			}
			else
			{
			check_input(line);
			}
		}
	}
}
