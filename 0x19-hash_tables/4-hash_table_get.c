#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value based on a given key
 * @ht: pointer to hash table
 * @key: input key as string
 *
 * Return: value associated with the element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t **array = NULL;
	hash_node_t *seeker = NULL;

	/* check if caller passing admissable arguments */
	if (!ht || !key || !*key)
		return (NULL);

	array = ht->array;
	/* retrieve hashed key_idx */
	key_idx = key_index((unsigned char *)key, ht->size);

	/* check if key_idx pointer to node */
	if (!array[key_idx])
		return (NULL);

	seeker = array[key_idx];
	/* loop through matched key slot for matching key string in llist */
	while (seeker)
	{
		if (strcmp(seeker->key, key) == 0)
			return (seeker->value);
		seeker = seeker->next;
	}

	/* key not found */
	return (NULL);

}
