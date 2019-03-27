#include "lists.h"

/**
 * find_loop_address - find the position of element that introduces loop
 * @head: pointer to start of the list
 *
 * Return: pointer to start of the loop
 */
const listint_t *find_loop_address(const listint_t *head)
{
	const listint_t *t = head, *h = head;

	while ((t != NULL) && (h != NULL))
	{
		h = h->next->next;
		t = t->next;

		if (t == h)
		{
			h = head;
			while (h != t)
			{
				h = h->next;
				t = t->next;
			}
			return (t);
		}
	}
	return (NULL);
}

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to beginning of linked list linsint_t
 *
 * Return: number of nodes in the list or 98 if failure
 */

size_t print_listint_safe(const listint_t *head)
{

	const listint_t *loopAddress = find_loop_address(head);
	const listint_t *ptr = head;
	size_t nodeCount = 0;
	int loopFlag = 0;

	if (head == NULL)
		exit (98);

	if (loopAddress != NULL)
	{
		while (ptr != loopAddress || loopFlag == 0)
		{
			ptr == loopAddress ? (loopFlag = 1): (loopFlag = 0);
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			nodeCount++;
			ptr = ptr->next;
		}
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		printf("-> [%p] %d\n", (void *)ptr->next, ptr->next->n);
	}

	else
	{
		while (ptr != NULL)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			nodeCount++;
			ptr = ptr->next;
		}
	}

	return (nodeCount);
}
