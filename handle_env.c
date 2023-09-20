#include "shell.h"
/**
 * handle_env - to handle the enviroment
 * Return: nothing
*/
void handle_env(void)
{
	char **env = environ;

	while (*env)
	{
		to_print(*env);
		to_print("\n");
		env++;
	}
}
