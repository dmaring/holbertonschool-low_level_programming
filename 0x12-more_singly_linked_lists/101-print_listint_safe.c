#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to beginning of linked list linsint_t
 *
 * Return: number of nodes in the list or 98 if failure
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount = 0;

	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodeCount++;
		head = head->next;
	}

	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		nodeCount++;
	}

	return (nodeCount);
}
