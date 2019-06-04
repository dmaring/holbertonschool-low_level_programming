#include "hash_tables.h"

/**
 * hash_table_create - create and initialize a hash table
 * @size: size of the hash table array
 *
 * Return: pointer to new hash table or NULL if failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **hl;

	/** create a list of pointers of size and assign it to hash_table**/
	hl = calloc(size, sizeof(hash_node_t *));
	if (hl == NULL)
		return (NULL);

	/** create a hash_table and assign list of pointers to array **/
	ht = calloc(1, sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = hl;

	return (ht);
}
