#include "lists.h"

/**
 * list_len - returns number of items in a list
 * @h: pointer to list
 * Return: the number of items
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	for (count = 0; temp; count++)
		temp = temp->next;
	return (count);
}
