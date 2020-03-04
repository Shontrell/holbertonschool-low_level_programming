#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int row, col;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (p)
	{
		p = malloc(sizeof(int*) * height);
		for (row = 0; row < height; row++)
		{
			if (p[row])
			{
				p[row] = malloc(sizeof(int) * width);
				for (col = 0; col < width; col++)
				{
					p[row][col] = 0;
				}
			}
			else
			{
				return (NULL);
			}
		}
		return (p);
	}
	else
	{
		return (NULL);
	}
}
