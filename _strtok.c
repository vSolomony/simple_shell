#include "shell.h"
/**
 * _strtok - same function as strtok
 * @the_str: string pointer
 * @delm: the delimter
 * Return: the tokenized string
*/
char *_strtok(char *the_str, const char *delm)
{
	static char *ptr_bank;
	size_t len;

	*ptr_bank = NULL;

	if (the_str == NULL)
	{
		the_str = ptr_bank;
	}

	size_t len = _strcspn(the_str, delm);

	if (len == 0)
	{
		return (NULL);
	}

	char *the_token = malloc(len + 1);

	_strncpy(the_token, the_str, len);
	the_token[len] = '\0';

	ptr_bank = the_str + len;

	return (the_token);
}
