#include "holberton.h"

/**
 * swap_int - swaps value at pointer a to value at pointer b & vice versa
 * @a: first pointer to swap values
 * @b: second pointer to swap values
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
