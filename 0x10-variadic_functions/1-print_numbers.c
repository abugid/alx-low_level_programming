#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator to be used
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
	return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%s ", separator);
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
