#include "holberton.h"
/**
 * *_strncpy - copies a string
 * @dest: pointer one
 * @src: pointer two
 * @n: int
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{

	if (src[x] != '\0' || x < n)
	{
		dest[x] = src[x];
	}
	else
	{
		dest[x] = '\0';
	}
	x++;
	}
	return (dest);
}
