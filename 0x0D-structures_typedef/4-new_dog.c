#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: input string
 *
 * Return: length as integer
 */
int _strlen(char *s)
{
	int i = 0, size = 0;

	while (s[i])
	{
		i++;
		size++;
	}

	return (size);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	nl = _strlen(name) + 1;
	ptr->name = malloc(nl * sizeof(char));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		ptr->name[i] = name[i];

	ptr->age = age;

	ol = _strlen(owner) + 1;
	ptr->owner = malloc(ol * sizeof(char));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		ptr->owner[i] = owner[i];
	return (ptr);
}
