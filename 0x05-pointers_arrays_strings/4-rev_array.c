#include "holberton.h"

/**
 * reverse_array - reverse an array of integers
 * @a: input array of integers
 * @n: length of input array
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
		n--;
	}
}
