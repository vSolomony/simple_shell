#include "shell.h"
/**
 * main - entry level
 * @argc: nuumber of args
 * @argv: number of the char of each arg
 * Return: 0 (Sucess)
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (to_exec_command(argv[i]) == -1)
			{
				to_print("there's no such command");
			}
		}
	}
	else
	{

		char the_command[128];

		while (1)
		{
			to_print("Solomony_Shell$ ");
			if (to_read_command(the_command, sizeof(the_command)) == 0)
			{
				to_print("\n");
				break;
			}
			if (to_exec_command(the_command) == -1)
			{
				to_print("there's no command!!");
			}
		}
	}
	return (0);
}
