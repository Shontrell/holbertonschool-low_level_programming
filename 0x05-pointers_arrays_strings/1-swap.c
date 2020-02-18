#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: int one
 * @b: int two
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int var1 = *a;
	*a = *b;
	*b = var1;
}
