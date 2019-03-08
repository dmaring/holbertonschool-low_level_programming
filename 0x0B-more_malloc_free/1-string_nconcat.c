#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concat onto string 1
 *
 * Return: pointer to new location of concatenated string
 * or NULL if malloc() fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_s1 = 0, size_s2 = 0, i;
	char *ptr;

	i = 0;
	while (s1[i])
	{
		size_s1++;
		i++;
	}

	i = 0;
	while (s2[i])
	{
		size_s2++;
		i++;
	}

	if (n < size_s2)
		size_s2 = n;

	ptr = malloc(sizeof(*ptr) * (size_s1 + size_s2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < size_s2; i++)
		ptr[size_s1 + i] = s2[i];

	ptr[size_s1 + size_s2 + 1] = '\0';
	return (ptr);
}
