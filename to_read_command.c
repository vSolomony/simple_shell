#include "shell.h"
/**
 * to_read_command - function that read the commands
 * @the_command: pointer of command string
 * @the_size: the size of string
 * Return: 1 in sucess 0 in fail
*/
int to_read_command(char *the_command, size_t the_size)
{
	int value;

	if (_fgets(the_command, the_size, 0) == NULL)
	{
		if (feof(stdin))
		{
			to_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			to_print("Your input has an Error!");
			exit(EXIT_FAILURE);
		}
		return (0);
	}

	value = _strcspn(the_command, "\n");
	the_command[value] = '\0';
	return (1);
}
