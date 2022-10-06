#include "lists.h"
/**
 * print_listint_safe - prints a linked list with or without loops
 * @head: pointer to the head of the linked list
 * Return: returns the count of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	for (count = 0; head; count++, head = head->next)
	{
		if (head < head->next)
		{
			printf("[%p] %u\n", (void *)head, head->n);
			head = head->next;
			printf("-> [%p] %u\n", (void *)head, head->n);
			break;
		}
		printf("[%p] %u\n", (void *)head, head->n);
	}
	return (count);
}
