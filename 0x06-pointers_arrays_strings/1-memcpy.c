#include "holberton.h"

/**
 * _memcpy - copies n bytes from area src to memory area dest
 * @dest: destination pointer
 * @src: source memory to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
