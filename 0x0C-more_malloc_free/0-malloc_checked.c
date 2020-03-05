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

	p = (int*)malloc(sizeof(int) * b);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
	exit (98);
}
