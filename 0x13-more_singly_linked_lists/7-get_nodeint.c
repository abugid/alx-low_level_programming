#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 * @head: pointer to head of a list
 * @index: index to be found
 * Return: pointer to node or if not found NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
