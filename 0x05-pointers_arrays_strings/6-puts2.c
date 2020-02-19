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

	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string = string + 2;
	}
	_putchar('\n');
}
