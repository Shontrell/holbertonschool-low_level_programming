#include "holberton.h"
/**
 * *_strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack, *match = needle;

		while (*haystack && *match && *haystack == *match)
		{
			haystack++;
			match++;
		}
		if (!*match)
		{
			return (start);
		}
		haystack++;
	}
	return (0);
}
