#include "holberton.h"
/**
 * findpn - find prime number
 * @x: int
 * @y: int
 * Return: 0
 */
int findpn(int x, int y)
{
	if (y < x)
	{
		if (x % y == 0)
		{
			return (0);
		}
		else
		{
			return (findpn(x, y + 1));
		}
	}
	return (1);
}
/**
 * is_prime_number - returns 1 if integer is a prime number, if not return 0
 * @n: int
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (findpn(n, 2));
}
