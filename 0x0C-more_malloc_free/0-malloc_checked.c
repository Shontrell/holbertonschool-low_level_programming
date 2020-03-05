#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(double) * b);
	if (p == NULL)
	{
		return (NULL);
	}
	exit (98);
}
