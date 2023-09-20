#include "shell.h"
/**
 * main - entry level
 * Return: 0 (Sucess)
*/
int main()
{
	if (isatty(STDIN_FILENO) == 1)
	{
		interactive_SHELLMODE();
	}
	else
	{
		noninteractive_SHELLMODE();
	}
	return (0);
}
