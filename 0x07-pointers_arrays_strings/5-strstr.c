#include "main.h"

/**
 * _strstr - search for a substring in a string
 * @haystack: string to be searched in
 * @needle: string be searched for
 * Return: a pointer to the substring if not found NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int nSize, i, j, k, trigger;

	i = 0;

	for (nSize = 0; needle[nSize] != '\0'; nSize++)
	;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0, k = 0, trigger = 0; j < nSize; j++, k++)
			{
				if (haystack[i + k] != needle[j])
				{
					trigger = 1;
					break;
				}
			}
			if (!trigger)
			{
				return (&haystack[i]);
			}
		}

		i++;

	}
	return (0);
}
