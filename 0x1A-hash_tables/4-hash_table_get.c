#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you are looking into
 * @key: key you are looking for
 * Return: the value associated with the key, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int x = 0;
	hash_node_t *hold = NULL;

	if (key == NULL)
		return (NULL);

	if (ht != NULL)
	{
		x = key_index((const unsigned char *)key, ht->size);
		hold = ht->array[x];
		while (hold != NULL)
		{
			if (strcmp(hold->key, key) == 0)
				return (hold->value);
			hold = hold->next;
		}
	}
	return (NULL);
}
