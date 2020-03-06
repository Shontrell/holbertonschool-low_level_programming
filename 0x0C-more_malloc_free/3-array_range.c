#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *p, count;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (count = 0; count <= (max - min); count++)
	{
		p[count] = min + count;
	}
	return (p);
}
