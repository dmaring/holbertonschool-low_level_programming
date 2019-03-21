#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints lists in linked structures
 * @h: struct list_t pointer
 *
 * Return: number of nodes as size_t
 */
size_t print_list(const list_t *h)
{
	unsigned long nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == '\0' || NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			nodeCount++;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
