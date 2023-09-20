#include "shell.h"
/**
 * interactive_SHELLMODE - interactive mode of shell
 * Return: nothing
*/
void interactive_SHELLMODE(void)
{
	char the_command[128];

	while (1)
	{
		to_print("SimpleShell$ ");
		if (to_read_command(the_command, sizeof(the_command)) == 0)
		{
			to_print("\n");
			break;
		}

		if (to_exec_command(the_command) == -1)
		{
			to_print("Command not found\n");
		}
	}
}
