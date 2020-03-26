#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int index, x, y;
	unsigned int sum = 0, base = 2;

	if (b == NULL)
	{
		return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != 48 && b[index] != 49)
		{
			return (0);
		}
		;
	}
	for (x = index - 1, y = 0; x >= 0; x--, y++)
	{
		if (y == 0)
		{
			sum += (b[x] - 48);
		}
		else
		{
		sum += ((b[x] - 48) * base);
		base *= 2;
		}
	}
	return (sum);
}
