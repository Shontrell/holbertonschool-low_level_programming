#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
	p = malloc(sizeof(int *) * height);
	if (p)
	{
		for (row = 0; row < height; row++)
		{
			p[row] = malloc(sizeof(int) * width);
			if (p[row])
			{
				for (col = 0; col < width; col++)
				{
					p[row][col] = 0;
				}
			}
			else
			{
				if (p[row] == NULL)
				{
					while (row >= 0)
					{
						free(p[row]);
						row --;
					}
				}
				free(p);
				return (NULL);
			}
		}
		return (p);
	}
	else
	{
		free(p);
		return (NULL);
	}
}
