#include "shell.h"
/**
 * _strcspn - a function similar to strcspn
 * @str_1: is pointer of first string
 * @str_2: is pointer of second string
 * Return: the total
*/
size_t _strcspn(const char *str_1, const char *str_2)
{
	size_t total = 0;

	while (*str_1 != '\0')
	{
		const char *bank = str_2;

		while (*bank != '\0')
		{
			if (*str_1 == *bank)
			{
				return (total);
			}

			bank++;
		}
		str_1++;
		total++;
	}

	return (total);
}

