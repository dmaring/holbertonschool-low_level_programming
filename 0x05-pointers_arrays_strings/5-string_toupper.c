#include "holberton.h"

/**
 * string_toupper - convert a string to all uppercase
 * @str: input string
 *
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
