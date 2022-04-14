#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _print_char(va_list list);
void _print_integer(va_list list);
void _print_float(va_list list);
void _print_string(va_list list);
/**
 * struct Form_id - structure definition of a dog
 * @type: type format
 * @f: pointer to function
 */
typedef struct Form_id
{
	char type;
	void (*f)();
} form_id;
#endif
