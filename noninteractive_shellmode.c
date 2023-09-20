#include "shell.h"
/**
 * noninteractive_SHELLMODE - the non interactive mode
 * Return: nothing
*/
void noninteractive_SHELLMODE(void)
{
	char command[128];

	while (1)
	{
		if (to_read_command(command, sizeof(command)) == 0)
		{
			break;
		}

		if (to_exec_command(command) == -1)
		{
			to_print("There's no such command!!\n");
		}
	}
}
