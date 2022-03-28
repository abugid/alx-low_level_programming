#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonal matrix
 * @a: matrix to be calculated
 * @size: size of the square matrix
 * Return: None
 */

void print_diagsums(int *a, int size)
{
	int i, sum, totalSize;

	totalSize = size * size;

	for (i = sum = 0; i < totalSize; i++)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
	}
	printf("%d, ", sum);
	for (i = sum = 0; i < totalSize; i++)
	{
		if (i % (size - 1) == 0 && i != totalSize - 1 && i != 0)
			sum += a[i];
	}

	printf("%d\n", sum);
}
