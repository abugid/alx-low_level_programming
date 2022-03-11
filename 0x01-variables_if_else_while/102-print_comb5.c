#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, firstD1, firstD2, lastD1, lastD2;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j > i)
			{
				(i >= 10) ? (firstD1 = i / 10) : (firstD1 = 0);
				(i >= 10) ? (lastD1 = i % 10) : (lastD1 = i);
				(j >= 10) ? (firstD2 = j / 10) : (firstD2 = 0);
				(j >= 10) ? (lastD2 = j % 10) : (lastD2 = j);

				putchar(firstD1 + '0');
				putchar(lastD1 + '0');
				putchar(' ');
				putchar(firstD2 + '0');
				putchar(lastD2 + '0');
				if (i != 98 && i != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
