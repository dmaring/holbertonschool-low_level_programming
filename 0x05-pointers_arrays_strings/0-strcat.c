# include "holberton.h"

/**
 * _strcat - concatenate two strings
n *
 * @dest: destination string to add other string
 * @src: source string to add on to destination string
 *
 * Return: pointer to resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	int _strlen(char *);
	int mark = _strlen(dest);
	int i;
	char *p;

	i = 0;
	while (src[i] != '\0')
	{
		dest[mark] = src[i];
		i++;
		mark++;
	}

	dest[mark] = '\0';
	p = dest;

	return (p);
}
/**
 * _strlen - calculate the length of a string
 *
 * @s: input string
 *
 * Return: integer of string length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
		length++;

	return (length);
}
