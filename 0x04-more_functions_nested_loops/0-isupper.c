#include "holberton.h"
/**
 * _isupper - checks for uppercse character
 *
 * @c: character being checked
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 || c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
