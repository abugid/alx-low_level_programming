#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: serparator to be used
 * @n: number of parameters provided
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *cur_char;
	va_list ap;

	if (separator == NULL)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%s ", separator);
		cur_char = va_arg(ap, char *);
		if (cur_char == NULL)
			printf("(nil)");
		else
			printf("%s", cur_char);
	}
	printf("\n");
	va_end(ap);
}
