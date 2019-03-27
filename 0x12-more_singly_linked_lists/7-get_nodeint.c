#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: start of the list as listint_t pointer
 * @index: index element to return
 *
 * Return: pointer at the given index or 0 if index doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	if (i == index)
		return (head);

	return (0);
}
