#include "shell.h"
/**
 * _strcspn - a function similar to strcspn
 * @str_1: is pointer of first string
 * @str_2: is pointer of second string
 * Return: the total
*/
char *_strcspn(const char *str_1, const char *str_2)
{
	const char *ptr1, *ptr2;

	ptr1 = str_1;
	while (*ptr1)
	{
		ptr2 = str_2;
		while (*ptr2)
		{
			if (*ptr1 == *ptr2)
			{
				return ((char *)ptr1);
			}
			ptr2++;
		}
		ptr1++;
	}
	return ((char *)ptr1);
}
