#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: sum of data (n) of list elements or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
