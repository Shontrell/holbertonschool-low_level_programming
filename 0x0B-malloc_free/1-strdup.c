#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer
 * Return: 0
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str == '\0')
			return (0);
	}
	copy = malloc(x + 1);
	for (y = 0; y <= x; y++)
	{
		if (copy == '\0')
			return (0);
		copy[y] = str[y];
	}
	return (copy);
}
