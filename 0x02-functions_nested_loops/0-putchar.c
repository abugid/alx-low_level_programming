#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	printStr("_putchar");

	return (0);
}

/**
 *  * printStr - prints strings
 *   @s: - string
 *    * Return: Always 0 (Success)
 */
void printStr(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
