#include "shell.h"
/**
 * to_print - is a function to printout forma
 * @the_forma: pointer of forma which is going to be printed
*/
void to_print(const char *the_forma)
{
	write(STDOUT_FILENO, the_forma, _strlen(the_forma));
}
