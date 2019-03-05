#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy string into new string in memory
 * @str: input string to copy
 *
 * Return: pointer to new copied string, if string empty NULL
 */
char *_strdup(char *str)
{
	char *p;
	int size = 0;
	int i = 0;

	if (*str == '\0')
	{
		return (NULL);
	}

	i = 0;
	while (*(str + i))
	{
		size++;
		i++;
	}


	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		*(p + i) = *(str + i);
		i++;
	}

	p[i] = '\0';

	return (p);
}
