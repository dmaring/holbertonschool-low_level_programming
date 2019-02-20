#include "holberton.h"

/**
 * _strcpy - copies source string to destination string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;
	len = 0;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);

}
