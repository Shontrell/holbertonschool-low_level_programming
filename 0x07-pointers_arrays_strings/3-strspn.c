#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != s[x])
		{
			if (accept[y] == '\0')
			{
				return (x);
			}
			y++;
		}
		x++;
	}
	return (x);
}
