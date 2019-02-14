#include "holberton.h"

/**
 * _isdigit - checks if the input digit is 0 - 9
 * @c: input digit
 *
 * Return: 1 if @c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
