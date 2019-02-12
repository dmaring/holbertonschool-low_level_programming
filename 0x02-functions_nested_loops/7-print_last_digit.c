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

	n = (i % 10);
	if (n < 0)
		n = -n;
	m = (n + '0');
	_putchar(m);

	return (n);
}
