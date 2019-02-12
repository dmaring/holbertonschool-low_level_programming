#include "holberton.h"

/**
 * print_sign - print signs for negative and postive numbers
 * @n: input number to process
 *
 * Return: 1 and print + if n is greater than zero
 * 0 and 0 if n is zero
 * -1 and - if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
