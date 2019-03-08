#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: low range inclusive
 * @max: high range inclusive
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int n = 0, i;
	int *ptr;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);


	for (i = 0; i <= n; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
