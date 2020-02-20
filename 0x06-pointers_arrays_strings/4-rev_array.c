#include "holberton.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: array being reversed
 * @n: int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int start = n - 1, end = 0, i, var1;

	while (start >= 0)
	{
		if (start >= end)
		{
			i = a[start];
			var1 = a[end];
			a[end] = i;
			a[start] = var1;
		}
		start--;
		end++;
	}
}
