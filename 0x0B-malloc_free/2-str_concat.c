#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	unsigned int x = 0, y = 0, z, a = 0;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	newstr = malloc(x + y + 1);
	if (newstr)
	{
		for (z = 0; z < x; z++)
		{
			newstr[z] = s1[z];
		}
		for (z = x; z <= (x + y); z++, a++)
		{
			newstr[z] = s2[a];
		}
		return (newstr);
	}
	else
	{
		return (0);
	}
}
