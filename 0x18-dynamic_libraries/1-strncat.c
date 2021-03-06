#include "holberton.h"
/**
 * *_strncat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != src[n])
	{
		dest[x] = src[y];
		y++, x++;
	}
	return (dest);
}
