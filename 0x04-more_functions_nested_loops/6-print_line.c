#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: int being used for length of line
 *
 * Return: 0
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
		_putchar('_');
		}
	}
		_putchar('\n');
}
