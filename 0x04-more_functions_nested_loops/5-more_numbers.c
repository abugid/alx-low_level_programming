#include "main.h"

/**
 * more_numbers - print numbers 0 - 14 ten times
 *
 */

void more_numbers(void)
{
int i, j, tmp;

for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
tmp = j;
if (j >= 10)
{
tmp = tmp % 10;
_putchar(1 + '0');
}
_putchar(tmp + '0');
}
_putchar('\n');
}
}
