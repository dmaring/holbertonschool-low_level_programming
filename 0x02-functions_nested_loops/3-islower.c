#include "holberton.h"

/**
 * _islower - checks whether the character is a lower case letter
 * @c is the character to check
 *
 * Return - 1 if the character is lowercase and 0 if it is not lowercase
 */
int _islower(char c)
{
	if ((c >= 97) && (c <= 122))
		return(1);
	else
		return(0);
}
