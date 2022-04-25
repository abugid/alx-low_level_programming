#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer to the adress of the head element of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmpNext;

	tmp = *head;

	if (head == NULL)
		return;
	while (tmp)
	{
		tmpNext = tmp->next;
		free(tmp);
		tmp = tmpNext;
	}

	*head = NULL;
}
