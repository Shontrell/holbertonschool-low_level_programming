#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int count;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	p = (void *) malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (count = 0; count < size; count++)
		count = 0;
	return (p);
}
