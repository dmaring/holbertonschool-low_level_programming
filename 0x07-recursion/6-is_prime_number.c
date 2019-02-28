#include "holberton.h"

/**
 * _prime_check - check
 * @a: factor to check
 * @b: number to check if prime
 *
 * Return: 1 if prime or 0 if not
 */
int _prime_check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (_prime_check(a + 1, b));
}

/**
 * is_prime_number - return 1 if prime, 0 if not
 * @n: input number
 *
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_prime_check(2, n));
}
