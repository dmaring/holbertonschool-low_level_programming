#include "lists.h"

/**
 * pop_listint - function that deletes head node of a listint_t list
 * @head: double pointer to start of list
 *
 * Return: first element's n member or 0 if list is empty;
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
