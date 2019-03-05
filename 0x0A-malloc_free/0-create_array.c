#include "holberton.h"
#include <stdlib.h>


/**
 * create_array - create an array using malloc to allocate memory
 * @size: size of the array
 * @c: character to fill the array
 *
 * Return: pointer to array, NULL if failure
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;


	return (p);
}
