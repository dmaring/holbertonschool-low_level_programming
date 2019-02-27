#include "holberton.h"

/**
 * factorial - return factorial of a number
 * @n: input number
 *
 * Return: factorial as an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
