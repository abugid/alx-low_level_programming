#include "main.h"

/**
 * _strspn - find substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of characters which consists of
 * only charcters from the accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int aSize, subSize, i, j, trigger;

	subSize = i = trigger = 0;

	for (aSize = 0; accept[aSize] != '\0'; aSize++)
	;
	while (s[i] != '\0')
	{
		for (j = 0; j < aSize; j++)
		{
			if (s[i] == accept[j])
				trigger = 1;
		}
		if (!trigger)
			return (subSize);
		trigger = 0;
		i++;
		subSize++;
	}

	return (0);
}
