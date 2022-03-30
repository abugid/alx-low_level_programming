#include "main.h"

/**
 * _puts_recursion - string to be printed
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
