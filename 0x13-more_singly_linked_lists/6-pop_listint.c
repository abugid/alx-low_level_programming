#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: pointer to the adress of a head of a list
 * Return: the data of the deleted head or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
