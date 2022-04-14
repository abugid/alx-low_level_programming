#include "variadic_functions.h"


/**
 * _print_char - print char type element from va_list
 * @list: va_list passed to function
 */
void _print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _print_string - print string element from va_list
 * @list: va_list passed to function
 */
void _print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * _print_float - print float type element from va_list
 * @list: va_list passed to function
 */
void _print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _print_integer - print int type element from va_list
 * @list: va_list passed to function
 */
void _print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_all - prints anything
 * @format: pointer to string containing format of parameters
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *sep;

	form_id arr[] = {
		{'c', _print_char},
		{'i', _print_integer},
		{'f', _print_float},
		{'s', _print_string}};

	va_start(ap, format);
	sep = "";
	i = 0;
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (arr[j].type == format[i / 4])
		{
			printf("%s", sep);
			arr[j].f(ap);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
