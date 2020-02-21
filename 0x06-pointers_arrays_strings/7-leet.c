#include "holberton.h"
/**
 * leet - encodes a string
 * @str: pointer
 * Return: 0
 */
char *leet(char *str)
{
	int x = 0, y;
	char arr1[5] = {'4', '3', '0', '7', '1'};
	int arr2[10] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};

	while (str[x] != '\0')
	{
		for (y = 0 ;y < 10; y++)
		{
			if (str[x] == arr2[y])
			{
				str[x] = arr1[y / 2];
			}
		}
		x++;
	}
	str[x] = '\0';
	return (str);
}
