#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: pointer to function that persforms the comparision
 * Return: the index if match found, -1 if not, or -1 if size less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
		return (-1);
	}
	return (-1);
}
