#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int y;
	int x;
	int z;

	for (y = '0'; y <= '9'; y++)
	{
		for (x = '0'; x <= '1'; x++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (x == '1' && z <= '4')
				{
					_putchar(x);
				}
				if (!(x == '1' && z > '4'))
				{
					_putchar(z);
				}
			}
		}
		_putchar('\n');
	}
}
