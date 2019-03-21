#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of elements in linked list_t list
 * @h: struct list_t pointer
 *
 * Return: number of elements in liked list
 */
size_t list_len(const list_t *h)
{
	size_t lenCount = 0;

	while (h != NULL)
	{
		lenCount++;
		h = h->next;
	};

	return (lenCount);
}
