#include "lists.h"
/**
 * listint_len - returns number of elements
 * @h: the pointer to the head of a list
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h->next != NULL; count++)
		h = h->next;
	return (++count);
}
