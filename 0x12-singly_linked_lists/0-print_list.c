#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a list
 * @h: pointer to a list data struct
 * Return: the number of items printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	for (count = 0; temp; count++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}
