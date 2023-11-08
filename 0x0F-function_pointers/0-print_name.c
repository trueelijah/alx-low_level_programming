#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: parameter to print
 * @f: pointer of print variant
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
