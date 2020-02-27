#include "holberton.h"
/**
 * findsr - find the square root of a number
 * @sr: int
 * @s: int
 * Return: 0
 */
int findsr(int sr, int s)
{
	if ((s * s) > sr)
	{
		return (-1);
	}
	if ((s * s) == sr)
	{
		return (s);
	}
	return (findsr(sr, s + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (findsr(n, 0));
}
