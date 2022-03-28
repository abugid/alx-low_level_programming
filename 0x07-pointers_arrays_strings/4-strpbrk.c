#include "main.h"

/**
 * _strpbrk - looks for first instance of a charcter specified by accept
 * @s: string to be scanned
 * @accept: string containing characters to be matched
 * Return: pointer to the first instance of the character or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int aSize, i, j;

	i = 0;

	for (aSize = 0; accept[aSize] != '\0'; aSize++)
	;

	while (s[i] != '\0')
	{
		for (j = 0; j < aSize; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}

	return (0);
}
