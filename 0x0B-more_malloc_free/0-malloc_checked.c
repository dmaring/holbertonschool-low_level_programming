#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int of desired allocation size
 *
 * Return: pointer to allocated memory or exit(98) if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	/* reserve memory with b */
	ptr = malloc(b);
	/* if malloc returns NULL --> exit 98 */
	if (ptr == NULL)
		exit(98);
	/* else return pointer */
	else
		return (ptr);
}
