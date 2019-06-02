#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array = NULL;
	hash_node_t *seeker = NULL;
	size_t print_comma_flag = 0;
	size_t i = 0;

	/* check if ht is NULL return */
	if (!ht)
		return;

	array = ht->array;

	printf("{");
	/* loop through indices of array for non-NULL */
	while (i < ht->size)
	{
		if (array[i])
			{
				/* valid pointer found */
				print_comma_flag = 1;
				seeker = array[i];
				while(seeker)
				{
					printf("'%s': ", seeker->key);
					printf("'%s'", seeker->value);
					if (seeker->next)
						printf(", ");
					seeker = seeker->next;
				}
			}
		if (array[i+1] && print_comma_flag)
			printf(", ");
		i++;
	}
	printf("}\n");
}
