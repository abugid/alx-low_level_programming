#include "function_pointers.h"

/**
 * print_name - Print a name from a function pointer
 * @name: string to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
