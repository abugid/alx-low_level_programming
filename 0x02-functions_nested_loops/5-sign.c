#include "main.h"

/**
 * print_sign - checks if character is lowercase
 * @n: number to be checked
 * Return: 1 if greater than 0, 0 if it is 0, -1 if it is less than 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
