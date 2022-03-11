#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j > i)
			{
				for (k = 48; k < 58; k++)
				{
					if (k > j)
					{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
