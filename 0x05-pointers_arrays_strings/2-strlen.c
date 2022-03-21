#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to a string
 * Return: returns an integer(the length of a string)
 */

int _strlen(char *s)
{
int count;

count = 0;

while (s[count] != '\0')
{
count++;
}

return (count);
}
