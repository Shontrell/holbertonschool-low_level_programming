#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n: unsigned int
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int a = 0, b = 0, c, d = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	if (n < b)
		b = n;
	newstr = (char *) malloc(a + b + 1);
	if (newstr)
	{
		for (c = 0; c < a; c++)
			newstr[c] = s1[c];
		for (c = a; c <= (a + b); c++, d++)
			newstr[c] = s2[d];
		return (newstr);
	}
	else
	{
		free(newstr);
		return (NULL);
	}
}
