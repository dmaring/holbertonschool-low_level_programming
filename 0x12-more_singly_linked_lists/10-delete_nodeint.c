#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at the given index
 * @head: double pointer to start of linked list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if failure occurs
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *prevNode;

	/** empty list condition */
	if (*head == NULL)
		return (-1);

	/** not an empty list and index is first index */
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	i = 0;
	/** find element at index */
	while (i < index && temp->next != NULL)
	{
		prevNode = temp;
		temp = temp->next;
		i++;
	}
	if (i == index)
	{
		prevNode->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
