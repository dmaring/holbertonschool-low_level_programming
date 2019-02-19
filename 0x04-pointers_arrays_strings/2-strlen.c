#include "holberton.h"

/**
 * _strlen - find and return the length of a string
 * @s: string input
 *
 * Return: return the number of characters preceding the NUL character
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
