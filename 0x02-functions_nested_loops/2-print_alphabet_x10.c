#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
int i, x, j;

for (x = 0; x < 10; x++)
{
j = 97;
for (i = 0; i < 26; i++)
{
_putchar(j);
j++;
}
_putchar('\n');
}
}
