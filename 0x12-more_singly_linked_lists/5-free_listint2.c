#include "lists.h"

/**
 * free_listint2 - free a listint_t list and set head to NULL
 * @head: double pointer to head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	head = NULL;
}
