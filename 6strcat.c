#include "shell.h"
/**
 * _strcat - same as strcat concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the destination string
 */
char *_strcat(char *dest, const char *src)
{
	char *str = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (str);
}
