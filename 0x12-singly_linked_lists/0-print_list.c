#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a list
 * @h: pointer to a list data struct
 * Return: the number of items printed
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;

	while (h->next != NULL)
	{
		if (h->str != NULL)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	i++;
	if (h->str != NULL)
		printf("[%i] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	return (i);
}
