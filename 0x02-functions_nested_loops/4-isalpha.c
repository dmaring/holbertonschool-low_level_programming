#include "holberton.h"

/**
 * _isalpha - checks whether the character is a lowercase or uppercase letter
 * @c: is the character to check
 *
 * Return: 1 if the character is lowercase or uppercase
 * and 0 if it is not lowercase
 */
int _isalpha(char c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
