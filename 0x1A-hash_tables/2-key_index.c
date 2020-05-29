#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index where key/value pair should be stored in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
