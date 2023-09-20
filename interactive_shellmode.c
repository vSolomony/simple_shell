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
			check_input(line);
		}
	}
}
