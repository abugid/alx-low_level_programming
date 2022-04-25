#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the head element of a list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *tmpNext;

	tmp = head;

	while (tmp)
	{
		tmpNext = tmp->next;
		free(tmp);
		tmp = tmpNext;
	}
}
