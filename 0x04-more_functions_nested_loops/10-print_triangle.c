#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
int i, j, k, l, m;

j = size - 1;
k = 1;

for (i = 0; i < size; i++)
{
for (l = 0; l < j; l++)
{
_putchar(' ');
}
for (m = 0; m < k; m++)
{
_putchar('#');
}
_putchar('\n');
j--;
k++;
}
}
