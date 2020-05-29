#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int x;
	hash_table_t *newtable;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);
	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		newtable->array[x] = NULL;
	return (newtable);
}
