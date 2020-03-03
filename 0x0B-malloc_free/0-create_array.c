#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it
 * @size: size
 * @c: character
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int count;

	x = malloc(size);
	if (x)
	{
		for (count = 0; count < size; count++)
		{
			x[count] = c;
		}
		x[count] = '\0';
		return (x);
	}
	else
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}
}
