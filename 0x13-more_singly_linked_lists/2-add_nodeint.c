#include "lists.h"

/**
 * add_nodeint - adds a node onto a listint_t list
 * @head: adress of a pointer to the head of the list
 * @n: number to added
 * Return: the adress of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
