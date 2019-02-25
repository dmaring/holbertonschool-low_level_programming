#include "holberton.h"

/**
 * _memset - fills the first n bytes of memory pointed to by s
 * with the constant byte b
 * @s: pointer to memory position
 * @b: constant byte to fill memory
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
