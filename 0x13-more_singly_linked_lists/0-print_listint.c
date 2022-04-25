#include "lists.h"
/**
 * print_listint - prints list
 * @h: pointer to the head of the list
 * Return: return the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t i;

	for (tmp = h, i = 0; tmp != NULL; i++, tmp = tmp->next)
		printf("%d\n", tmp->n);

	return (i);
}
