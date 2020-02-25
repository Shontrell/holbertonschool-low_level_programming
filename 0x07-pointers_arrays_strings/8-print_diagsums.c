#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int x, y, num = 0;
	unsigned int sum1 = 0, sum2 = 0;

	num = (size * size) - 1;

	for (x = 0; x <= num; x = x + (size + 1))
	{
		sum1 = sum1 + a[x];
	}
	for (y = (size - 1); y < num; y = y + (size - 1))
	{
		sum2 = sum2 + a[y];
	}
	printf("%d, %d\n", sum1, sum2);
}
