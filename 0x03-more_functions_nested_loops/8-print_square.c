#include "holberton.h"

/**
 * print_square - print a square size of n
 * @n: length of the diagonal line
 *
 */
void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
