#include "main.h"

/**
 * _strchr - find and return the first occurence of a character in a string
 * @s: string to search in
 * @c: character to search for
 * Return: a pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (0);
}
