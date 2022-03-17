#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of \ to print
 */

void print_diagonal(int n)
{
if (n > 0)
{
int i, j, k;

k = 0;
for (i = 0; i < n; i++)
{
for (j = 0; j < k; j++)
{
_putchar(' ');
}
_putchar('\\');
if (i != n - 1)
{
_putchar('\n');
}

k++;
}
}
_putchar('\n');
}
