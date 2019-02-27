#include "holberton.h"
/**
 * _sqrt_check - check for square root of a
 * @a: guess number to square
 * @b: number to find square root
 *
 * Return: -1 if none or square root of b
 */
int _sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (_sqrt_check(a + 1, b));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: input number
 *
 * Return: if sqrt, return sqrt, else return -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt_check(1, n));
}
