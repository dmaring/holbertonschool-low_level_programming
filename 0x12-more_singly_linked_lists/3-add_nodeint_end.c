#include "lists.h"

/**
 * add_nodeint_end - add a new node at end of listint_t list
 * @head: double pointer to start of linked list
 * @n: number to add to member n for newly created node
 *
 * Return: address of new element, or NULL if failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/** Create new node element */
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/** Find end of list and insert element */

	if (*head == NULL)
		*head = new_node;

	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);

}
