#include "shell.h"
/**
 * interactive_SHELLMODE - interactive mode of shell
 * Return: nothing
*/
void interactive_SHELLMODE(void)
{
	while (1)
	{
		char *line = to_read_command();

		check_input(line);
	}
}
