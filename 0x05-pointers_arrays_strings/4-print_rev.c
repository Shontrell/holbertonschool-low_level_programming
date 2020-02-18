#include "holberton.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: string getting printed in reverse
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		str++;
	}
	str--;
	while (str >= 0)
	{
		_putchar(s[str]);
			str--;
	}
	_putchar('\n');
}
