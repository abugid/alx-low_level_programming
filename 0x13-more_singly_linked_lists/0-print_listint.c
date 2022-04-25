#include "lists.h"
/**
 * print_listint - prints list
 * @h: pointer to the head of the list
 * Return: return the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h->next != NULL)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	printf("%i\n", h->n);
	i++;
	return (i);
}
