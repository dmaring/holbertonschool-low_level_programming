#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a listint_t
 * @head: double pointer to beginning of list
 * @n: number to add in newly created node element
 *
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/** Create new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/** Insert node at beginning of list */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
