#include "lists.h"

/**
 * add_nodeint_end - adds node on the end
 * @head: pointer to the head
 * @n: number to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	while (tmp && tmp->next != NULL)
		tmp = tmp->next;
	if (tmp)
		tmp->next = new;
	else
		*head = new;
	return (new);
}
