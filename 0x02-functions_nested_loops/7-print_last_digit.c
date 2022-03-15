#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 * @n: number to be processed
 * Return: the last digit of the number n
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = n * -1;
	}
	i = n % 10;
	_putchar(i + '0');
	return (i);
}
