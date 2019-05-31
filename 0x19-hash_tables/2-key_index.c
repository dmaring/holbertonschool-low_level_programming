#include "hash_tables.h"

/**
 * key_index - finde a key index based on key and hash table size
 * @key: input key as string
 * @size: input size as unsigned long int
 *
 * Return: index where key/value pair should be stored in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ret_index;

	ret_index = hash_djb2(key);
	ret_index = ret_index % size;

	return (ret_index);
}
