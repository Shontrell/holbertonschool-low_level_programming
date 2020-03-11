#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: pointer to an array of int
 * @size: size of array
 * @cmp: pointer to function returning an int
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);
	if (array && size > 0 && cmp)
	{
		for (x = 0; x < size; x++)
		{
			cmp(array[x]);
			if (cmp(array[x]))
				break;
		}
		return (x);
	}
	else
	{
		return (-1);
	}
}
