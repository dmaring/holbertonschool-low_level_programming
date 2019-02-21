#include "holberton.h"

/**
 * _strncpy - copy a string from src to dest of n bytes
 * @src: pointer to string to be copied
 * @dest: pointer to string destination
 * @n: number of bytes to copy from src string to dest string
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		*(dest + i) = *(src + i);

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
