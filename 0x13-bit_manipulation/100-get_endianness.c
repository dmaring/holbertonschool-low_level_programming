#include "holberton.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 1 if little endian or 0 if big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
