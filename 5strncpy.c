#include "shell.h"
/**
 * _strncpy - function same as strncpy
 * @desta: a pointer of strings
 * @the_source: a const pointer of strings
 * @num: the number
 * Return: the pointer of strings
 */
char *_strncpy(char *desta, const char *the_source, size_t num)
{
	char *ptr = desta;

	while (num > 0 && *the_source)
	{
		*desta = *the_source;
		desta++;
		the_source++;
		num--;
	}

	*desta = '\0';

	return (ptr);
}
