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
				free(line);
				handle_exit();
			}
			else if (_strcmp(line, "env") == 0)
			{
				free(line);
				handle_env();
			}
			else
			{
				check_input(line);
				free(line);
			}
		}
		else
		{
			to_print("\n");
			handle_exit();
		}
	}
}
