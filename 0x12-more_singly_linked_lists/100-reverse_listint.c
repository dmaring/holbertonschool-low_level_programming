#include "lists.h"

/**
 * reverse_listint - reverse a linked list listint_t
 * @head: double pointer to beginning of list
 *
 * Return: pointer to the first node of reversed loop.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *nextNode = NULL;

	while (*head != NULL)
	{
		/** store nextNode */
		nextNode = (*head)->next;
		/** reverse current node's pointer */
		(*head)->next =  prevNode;
		/** move pointers ahead one position */
		prevNode = (*head);
		*head = nextNode;
	}

	/** set *head to prevNode since it currently points to NULL */
	*head = prevNode;

	return (*head);
}
