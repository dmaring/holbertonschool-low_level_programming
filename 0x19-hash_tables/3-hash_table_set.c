#include "hash_tables.h"

/**
 * replace_node_value - set value of nodes with same key string
 * @target: pointer to node target to change value
 * @value: value to set in node
 *
 * Return: 1 if success, 0 if failure
 */
int replace_node_value(hash_node_t *target, const char *value)
{
	/* free the target node's current value */
	/* strdup() the new value and set it in node */
	free(target->value);
	target->value = strdup(value);
	if (target->value == NULL)
		return (0);
	return (1);
}


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
	hash_node_t *seeker = NULL;
	hash_node_t *new_next = NULL;
	hash_node_t *new_node = NULL;

	/* check if caller passing admissable arguments */
	if (!ht || !key || !*key || !value)
		return (0);
	array = ht->array;
	key_idx = key_index((unsigned char *)key, ht->size);
	if (array[key_idx])
	{
		/* traverse linked list for key == array[key_idx]->key */
		seeker = array[key_idx];
		while (seeker)
		{
			if (strcmp(seeker->key, key) == 0)
			{
				replace_node_value(seeker, value);
				return (1);
			}
			seeker = seeker->next;
		}
		/* if list isn't empty and key string unique set new_next */
		new_next = array[key_idx];
	}
	else
		/* if list empty set new_next to NULL */
		new_next = NULL;
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* duplicate and set value and key */
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = new_next;
	/* set linked list head to new_node */
	array[key_idx] = new_node;
	return (1);
}
