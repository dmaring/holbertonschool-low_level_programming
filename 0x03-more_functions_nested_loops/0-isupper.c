#include "holberton.h"

/**
 * _isupper - checks if int character provided is uppercase
 * @c: input character as int
 *
 * Return: 1 if @c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
