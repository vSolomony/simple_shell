#include "shell.h"
/**
 * _strlen - a function like strlen
 * @str: is a pointer
 * Return: the len
*/
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}
