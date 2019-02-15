#include "holberton.h"

/**
 * print_line - print a line using underscore
 * @n: number of times underscore should be printed
 *
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar('_');
	}
	_putchar('\n');
}
