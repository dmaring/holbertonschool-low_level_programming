#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: double pointer to first item in linkedlist
 * @idx: index of the list where node is added
 * @n: number to insert into new element node
 *
 * Return: address of new node or NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	i = 0;
	/** find the element right before idx */
	while (i < (idx - 1) && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (i == (idx - 1))
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}

	return (NULL);
}
