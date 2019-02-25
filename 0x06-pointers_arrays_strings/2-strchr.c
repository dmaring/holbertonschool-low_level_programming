#include "holberton.h"
#define NULL 0

/**
 * _strchr - returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s: input string
 * @c: character to locate
 *
 * Return: pointer to first occurrence or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (NULL);
}
