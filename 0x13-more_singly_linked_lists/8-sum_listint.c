#include "lists.h"

/**
 * sum_listint - sum up elements
 * @head: pointer to head element
 * Return: sum of elements or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
