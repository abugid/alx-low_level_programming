#include "main.h"

/**
 * _memset - fill a set number of memory with a character
 * @s: poiter to a buffer to be filled
 * @b: character to fill said buffer
 * @n: number of memory to be filled
 * Return: a pointer to the memory buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
