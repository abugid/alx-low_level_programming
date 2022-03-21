#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: coverted integer
 */

int _atoi(char *s)
{
unsigned int i, size, nPow, sign, num, j;

i = size = num = 0;
nPow = sign = 1;


while (s[i] != '\0')
{
if (size > 0 && (s[i] < '0' || s[i] > '9'))
break;

if (s[i] == '-')
sign *= -1;

if (s[i] >= '0' && s[i] <= '9')
{
if (size > 0)
nPow *= 10;
size++;
}
i++;
}

for (j = i - size; j < i; j++)
{
num = num + ((s[j] - 48) * nPow);
nPow /= 10;
}
return (num *sign);
}
