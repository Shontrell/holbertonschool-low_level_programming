#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int x = 0;
	char *dupval;
	hash_node_t *hold, *node;

	if (ht == NULL)
		return (0);
	if (ht->array == NULL)
                return (0);
	if (value == NULL)
                return (0);
	if (strlen(key) == 0)
		return (0);
	dupval = strdup(value);
	if (dupval == NULL)
		return (0);
	x = key_index((unsigned char *)key, ht->size);
	hold = ht->array[x];
	while (hold)
	{
		if (strcmp(hold->key, key) == 0)
		{
			free(hold->value);
			hold->value = dupval;
			hold->value = strdup(value);
			free(dupval);
			return (1);
		}
		hold = hold->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	node->value = dupval;
	node->next = ht->array[x];
	ht->array[x] = node;
	return (1);
}
