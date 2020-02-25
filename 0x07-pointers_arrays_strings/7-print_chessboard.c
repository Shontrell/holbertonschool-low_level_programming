#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int row, col, x = 0;

	while (a[x][7] != '\0')
	{
		x++;
	}
	row = 0;
	while (row < x)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
