#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int x = 0;
	hash_node_t *hold;

	if (ht == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		hold = ht->array[x];
		while (hold)
		{
			if (hold->next == NULL)
				printf("'%s': '%s'", hold->key, hold->value);
			else
			printf("'%s': '%s', ", hold->key, hold->value);
			hold = hold->next;
		}
	}
	printf("}\n");
}
