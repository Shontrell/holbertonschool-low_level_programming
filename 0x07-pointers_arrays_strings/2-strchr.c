#include "holberton.h"
/**
 * *_strchr - locates a character in a string
 * @s: pointer
 * @c: character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
