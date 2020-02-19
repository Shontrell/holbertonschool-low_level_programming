#include "holberton.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string being cut in half
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int string = 0;
	int half = 0;

	while (str[string] != '\0')
	{
		string++;
	}
	half = string / 2;

	while (half < string)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
