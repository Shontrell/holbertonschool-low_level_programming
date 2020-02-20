#include "holberton.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest - pointer
 * @src - pointer
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x++] = src[y++];
	}

	return (dest);
}
