#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n numbers of an array
 * @a: array
 * @n: numbers of array to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
