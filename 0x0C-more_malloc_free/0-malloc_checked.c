#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
