#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer to the adress of the head element of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
