#include "shell.h"
/**
 * _fgets - a function similar to fgets
 * @str_t: a pointer of chars
 * @the_size: the size of char
 * @fi_des: is the file descriptor
 * Return: the string str_t
*/
char *_fgets(char *str_t, int the_size, int fi_des)
{
	int byts_to_read = 0;
	char ch;

	if (the_size <= 0 || fi_des < 0 || str_t == NULL)
	{
		return (NULL);
	}

	while (byts_to_read < the_size - 1)
	{
		if (read(fi_des, &ch, 1) <= 0)
		{
			if (byts_to_read == 0)
			{
				return (NULL);
			}
			break;
		}

		str_t[byts_to_read] = ch;
		byts_to_read++;

		if (ch == '\n')
		{
			break;
		}
	}
	str_t[byts_to_read] = '\0';
	return (str_t);
}
