#include "lists.h"

/**
 * add_node - adds a node
 * @head: a pointer to a pointer to a list
 * @str: string to be added
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
