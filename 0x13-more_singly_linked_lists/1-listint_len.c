#include "lists.h"
/**
 * listint_len - returns number of elements
 * @h: the pointer to the head of a list
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t count;

	for (tmp = h, count = 0; tmp != NULL; count++, tmp = tmp->next)
		;

	return (count);
}
