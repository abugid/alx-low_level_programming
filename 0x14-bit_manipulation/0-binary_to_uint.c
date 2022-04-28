#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: pointer to binary string to be converted
 * Return: the converted number or 0 if contain other chars or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, k, num;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	sum = k = 0;
	i--;
	while (i > -1)
	{
		num = 0;
		if (b[i] == '1')
			num = 1;
		sum += num * hpow(k);
		k++;
		i--;
	}

	return (sum);
}

/**
 * hpow - calculates power of 2
 * @n: power
 * Return: the calculation
 */
unsigned int hpow(unsigned int n)
{
	if (n == 0)
		return (1);
	return (2 * hpow(--n));
}
