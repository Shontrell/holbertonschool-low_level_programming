#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer one
 * @s2: pointer two
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0' || s2[x] == '\0')
			break;
		s1[x]++, s2[x]++;
	}
	if (s1[x] == '\0' && s2[x] == '\0')
	{
		return (0);
	}
	else
	{
		return (-15);
	}
	return (0);
}
