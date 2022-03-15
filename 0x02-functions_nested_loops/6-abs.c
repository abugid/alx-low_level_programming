#include "main.h"

/**
 * _abs - absolute value
 * prints absolute value of a number
 * @n: number to be processed
 * Return: n if positve, -1 times n if negative
 */

int _abs(int n)
{
	if (n <= 0)
	{
		return (n * -1);
	}
	return (n);
}
