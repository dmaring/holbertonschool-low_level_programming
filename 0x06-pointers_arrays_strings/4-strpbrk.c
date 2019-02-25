#include "holberton.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes
 * in the string s, or NULL if the character is not found
 * @s: input string
 * @accept: characters to locate
 *
 * Return: pointer to first occurrence of byte in accept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}

	return (NULL);
}
