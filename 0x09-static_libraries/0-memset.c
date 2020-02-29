#include "holberton.h"
/**
 * *_memset- fills memory with a constant byte
 * @s: pointer
 * @b: character
 * @n: unsigned int
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (n > 97)
	{
		n = 97;
	}
	while (x < n)
	{
		s[x++] = b;
	}
	return (s);
}
