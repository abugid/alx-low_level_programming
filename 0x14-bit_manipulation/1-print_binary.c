#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary form of decimal
 * @n: decimal to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int pwr;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	pwr = get_pwr1(n, 1);

	while (pwr > 1)
	{
		if ((n & pwr) == 0)
			_putchar('0');
		else
			_putchar('1');
		pwr = get_pwr2(pwr, 1);
	}
	if ((n & pwr) == 0)
		_putchar('0');
	else
		_putchar('1');
}

/**
 * get_pwr1 - gets the min power of 2
 * @num: num to be compared
 * @i: initial power
 * Return: min power
 */
unsigned long int get_pwr1(unsigned long int num, unsigned long int i)
{
	int k;

	if (i * 2 > num)
		return (i);

	k = get_pwr1(num, 2 * i);
	return (k);
}

/**
 * get_pwr2 - gets the min power of 2
 * @num: num to be compared
 * @i: initial power
 * Return: min power
 */
unsigned long int get_pwr2(unsigned long int num, unsigned long int i)
{
	int k;

	if (i * 2 >= num)
		return (i);

	k = get_pwr2(num, 2 * i);
	return (k);
}
