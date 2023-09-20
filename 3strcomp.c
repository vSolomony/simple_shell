#include "shell.h"
/**
 * _strcmp - is a function same as strcmp
 * @str_1: is the first string
 * @str_2: is the second string
 * Return: the difference of the 2 strings
*/
int _strcmp(const char *str_1, const char *str_2)
{
	int i = 0;
	int value;

	while (str_1[i] == str_2[i])
	{
		if (str_1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	value = (str_1[i] - str_2[i]);

	return (value);
}
