#include <stdio.h>
#include <math.h>

/**
 * main - entrypoint
 * Return: Always 0
 */

int main(void)
{
long int n = 612852475143, tmp;

tmp = 0;

while (n % 2 == 0)
{
if (tmp < 2)
tmp = 2;
n = n / 2;
}
for (int i = 3; i <= sqrt(n); i = i + 2)
{

while (n % i == 0)
{
if (i > tmp)
tmp = i;
n = n / i;
}
}
if (n > 2)
{
if (n > tmp)
tmp = n;
}
printf("%ld\n", tmp);
}
