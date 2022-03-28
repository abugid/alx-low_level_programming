#include "main.h"

/**
 * *_strcpy - copies strings from src to dest
 * @src: source of the string to be copied
 * @dest: the destination of the copied string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}