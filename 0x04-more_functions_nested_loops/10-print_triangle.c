#include "holberton.h"
/**
 * print_triangle - print a triangle
 *
 * @size: size of triangle
 *
 * Return: the respective figure
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (!(size <= 0))
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((a + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
