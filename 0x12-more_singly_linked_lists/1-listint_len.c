#include "lists.h"

/**
 * listint_len - function that finds the number of elements in a linked list
 * @h: pointer to start of linked list
 *
 * Return: size_t number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
