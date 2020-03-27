#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: the index starting from 0
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int bit = 1;

	if (index > 63)
		return (-1);
	for (i = 0; i < index; i++)
	{
		bit = bit << 1;
	}
	*n = *n | bit;
	return (1);
}
