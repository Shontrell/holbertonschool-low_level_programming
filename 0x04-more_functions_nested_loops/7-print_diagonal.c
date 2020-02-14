#include "holberton.h"
/**
 * print_diagonal - draw a diagonal line
 *
 * @n: number of times diagonal line is printed
 *
 * Return: the respective cantity of backslash
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (!(n <= 0))
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (b <= a)
				{
					if (b == a)
						_putchar('\\');
					else
						_putchar(' ');
				}
				else
				{
					if (b == n)
						_putchar('\n');
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
