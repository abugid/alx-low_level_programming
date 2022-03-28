#include "main.h"

/**
 * _memcpy - copies n bytes from one memory to another
 * @dest: buffer to be copied to
 * @src: buffer to copy from
 * @n: number of bytes to copy
 * Return: a pointer to the copied buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
