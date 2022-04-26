#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given index
 * @head: pointer to adress of the head of a list
 * @idx: index of list to add new node
 * @n: number to be added
 * Return: pointer to new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *new;
	listint_t *prev;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	for (i = 0; tmp; i++, tmp = tmp->next)
	{
		if (i == idx)
		{
			if (i == 0)
				*head = new;
			else
				prev->next = new;
			new->next = tmp;
			return (new);
		}
		prev = tmp;
	}

	return (NULL);
}
