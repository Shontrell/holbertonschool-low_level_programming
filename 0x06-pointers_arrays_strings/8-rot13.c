#include "holberton.h"
/**
 * rot13 - encodes a string using ROT13
 * @str: a pointer
 * Return: 0
 */
char *rot13(char *str)
{
	int x = 0, y;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[x] != '\0')
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == arr1[y])
			{
				str[x] = arr2[y];
				break;
			}
		}
		x++;
	}
	str[x] = '\0';
	return (str);
}
