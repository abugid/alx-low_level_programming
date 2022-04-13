#include "function_pointers.h"

/**
 * array_iterator - iterate over and execute a function
 * @array: array to be iterated over
 * @size: size of the array
 * @action: pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
