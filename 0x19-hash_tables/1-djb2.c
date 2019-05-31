#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm
 * @str: input string to hash
 *
 * Return: hash output
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
