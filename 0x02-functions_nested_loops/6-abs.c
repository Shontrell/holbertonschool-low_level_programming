#include "holberton.h"
/**
 * _abs - Entry point
 *
 * @x: int passed as argument to the function
 *
 * Return: 0
 */
int _abs(int x)
{
	int y = x * -1;

	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (y);
			}
}
