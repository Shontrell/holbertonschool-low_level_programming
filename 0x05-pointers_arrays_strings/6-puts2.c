#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int string = 0;
	int even = 0;

	while (str[string] != '\0')
	{
		string++;
	}

	while (even < string)
	{
		_putchar(str[even]);
		even = even + 2;
	}
	_putchar('\n');
}
