#include "shell.h"
/**
 * main - entry level
 * Return: 0 (Sucess)
*/
int main(void)
{
	char the_command[128];
	char *const args[] = {"/bin/ls", NULL};

	while (1)
	{
		to_print("Solomony_Shell$ ");
		to_read_command(the_command, sizeof(the_command));
		to_exec_command(the_command, args);
	}

	return (0);
}
