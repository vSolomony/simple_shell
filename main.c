#include "shell.h"
/**
 * main - entry level
 * Return: 0 (Sucess)
*/
int main(void)
{
	char the_command[128];
	char *const args[] = {NULL};

	while (1)
	{
		to_print("Solomony_Shell$ ");
		if (to_read_command(the_command, sizeof(the_command)) == 0)
		{
			to_print("\n");
			break;
		}
		if (to_exec_command(the_command, args) == -1)
		{
			to_print("there's no command!!");
		}
	}

	return (0);
}
