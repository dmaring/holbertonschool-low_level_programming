#include "lists.h"
#include <stdlib.h>


/**
 * _strdup - copies a string to new malloc'd string
 * @s: input string to copy
 *
 * Return: newly created string pointer
 */
char *_strdup(const char *s)
{
	size_t i = 0;
	size_t j = 0;
	char *n;

	while (s[i] != '\0')
		i++;

	n = malloc(sizeof(char) * i);
	if (n == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		n[j] = s[j];

	return (n);
}

/**
 * add_node - add a new node to begining of linked list
 * @head: double pointer to reference head
 * @str: string to add to new struct
 *
 * Return: address of new structure element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = _strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;

	new->next = *head;
	*head = new;

	return (new);
}
