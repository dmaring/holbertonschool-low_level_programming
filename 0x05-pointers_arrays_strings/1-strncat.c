# include "holberton.h"

/**
 * _strncat - concatenate two strings
n *
 * @dest: destination string to add other string
 * @src: source string to add on to destination string
 * @n: number of characters of src to concat
 *
 * Return: pointer to resulting dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int _strlen(char *);
	int mark = _strlen(dest);
	int i;
	char *p;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[mark] = src[i];
		i++;
		mark++;
	}

	if (i < mark)
	{
		dest[mark] = '\0';
	}

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
