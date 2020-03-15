#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to char
 * @n: unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, numb = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return;
	}
	for (x = 0; x < n; x++)
	{
		numb = va_arg(ap, int);
		if (x == (n - 1))
		{
			printf("%d", numb);
		}
		else
		{
			if (separator != NULL)
				printf("%d%s ", numb, separator);
		}
	}
	printf("\n");
	va_end(ap);
}
