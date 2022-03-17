#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 */

void print_number(int n)
{
int numDigits, denm, j, k, n1;
if (n == 0)
{
_putchar('0');
}
numDigits = 0;
denm = 1;

if (n < 0)
{
n *= -1;
_putchar('-');
}
n1 = n;

while (n > 0)
{
n = n / 10;
numDigits++;
}

for (j = 0; j < numDigits; j++)
{
denm *= 10;
}
for (k = 0; k < numDigits; k++)
{
denm /= 10;
_putchar(n1 / denm + '0');
n1 = n1 % denm;
}
}
