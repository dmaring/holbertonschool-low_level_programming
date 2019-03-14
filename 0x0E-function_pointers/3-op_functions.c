#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
