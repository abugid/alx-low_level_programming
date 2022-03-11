#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char str[27] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 27; i++)
		putchar(str[i]);

	putchar('\n');

	return (0);
}
