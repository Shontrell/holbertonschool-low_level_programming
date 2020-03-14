#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: constant int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x = 0, sumall = 0;

	va_start(ap, n);

	if (n == 0)
	{
		va_end(ap);
		return (0);
	}

	for (x = 0; x < n; x++)
		sumall += va_arg(ap, int);

	va_end(ap);
	return (sumall);
}
