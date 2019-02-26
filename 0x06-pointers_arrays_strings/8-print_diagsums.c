#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - print the sum of two diagonals of a square
 * matrix of integers
 * @a: pointer to two dimensional array
 * @size: size of array e.g (5x5, 3x3)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, step, sum1, sum2;

	sum1 = 0;
	step = size + 1;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (step * i));
	}

	sum2 = 0;
	step = size - 1;
	for (i = 1; i < size + 1; i++)
	{
		sum2 += *(a + (step * i));
	}

	printf("%i, %i\n", sum1, sum2);
}
