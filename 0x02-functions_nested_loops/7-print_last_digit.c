#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @i: input number
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int n, m;

	if (i < 0)
		i = -i;

	n = (i % 10);
	m = (n + '0');
	_putchar(m);

	return (n);
}
