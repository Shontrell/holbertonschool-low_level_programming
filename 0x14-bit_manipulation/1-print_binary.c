#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: int to be converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = n & 1;

	if (n > 1)
		print_binary(n >> 1);
	_putchar(x + '0');
}
