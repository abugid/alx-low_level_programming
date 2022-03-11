#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	ch = 'A';

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
