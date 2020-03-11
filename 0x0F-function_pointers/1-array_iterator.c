#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to an array of int
 * @size: size of array
 * @action: pointer to a function that prints int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size > 0 && action)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
