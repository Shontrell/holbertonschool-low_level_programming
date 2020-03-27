#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: int
 * @index: the index starting from 0
 * Return: the value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int bit;

	if (index > 63)
		return (- 1);
	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	bit = n & 1;
	return (bit);
}
