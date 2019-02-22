#include "holberton.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 */
infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;

	for (i = 0; i < size_r; i++)
	{
		r = n1 + n2;
	}

	return (&r);
}
