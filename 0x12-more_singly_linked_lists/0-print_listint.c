#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
