#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int x;
	hash_node_t *hold, *hold2;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			hold = ht->array[x];
			while (hold != NULL)
			{
				hold2 = hold;
				hold = hold->next;
				free(hold2->key);
				free(hold2->value);
				free(hold2);
			}
		}
	}
	free(ht->array);
	free(ht);
}
