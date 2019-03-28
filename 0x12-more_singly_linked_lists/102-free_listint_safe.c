#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: double pointer to beginning of linked list linsint_t
 *
 * Return: number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodeCount = 0;
	listint_t *prevNode;

	if (*h == NULL)
		return (nodeCount);

	while (*h && *h > (*h)->next)
	{
		prevNode = *h;
		*h = (*h)->next;
		free(prevNode);
		nodeCount++;
	}

	if (*h)
	{
		free(*h);
		*h = NULL;
		nodeCount++;
	}

	return (nodeCount);
}
