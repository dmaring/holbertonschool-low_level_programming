#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: input key as string
 * @value: input value as string
 *
 * Return: 1 if success, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;
	hash_node_t **array = NULL;
	hash_node_t *new_next = NULL;
	hash_node_t *new_node = NULL;

	/* check if caller passing admissable arguments */
	if (!ht || !key || !*key || !value)
		return (0);

	array = ht->array;

	key_idx = key_index((unsigned char *)key, ht->size);
	printf("Key_index is: %lu\n", key_idx);
	/* check if key_idx already exists */
	if (array[key_idx])
		/* if list isn't empty set new_next to current head node */
		new_next = array[key_idx];
	else
		/* if list empty set new_next to NULL */
		new_next = NULL;

	/* create new hash_node */
	new_node = malloc(sizeof(hash_node_t));

	/* set and duplicate value and key */
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = new_next;

	/* set linked list head to new_node */
	array[key_idx] = new_node;

	/* printf("array[%lu]->value: %s\n", key_idx,  array[key_idx]->value); */
	/* printf("array[%lu]->key: %s\n", key_idx, array[key_idx]->key); */

	return (1);

}
