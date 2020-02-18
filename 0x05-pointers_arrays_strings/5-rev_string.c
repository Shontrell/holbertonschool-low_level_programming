#include "holberton.h"
/**
 * rev_string - reverse a string
 *
 * @s: string being reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char i;
	char var1;

	while (s[start] != '\0')
	{
		start++;
	}
	start--;

	while (start >= 0)
	{
		if (start >= end)
		{
		i = s[start];
		var1 = s[end];
		s[end] = i;
		s[start] = var1;
		}
		start--;
		end++;
	}
}
