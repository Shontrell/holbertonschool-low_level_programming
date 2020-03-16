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
        unsigned int x;
        int *str;

        va_start(ap, n);
        for (x = 0; x < n; x++)
        {
                str = va_arg(ap, int);
		if (str == NULL)
			printf("nil");
                if (x == (n - 1))
                        printf("%s", str);
                else
                {
                        if (separator != NULL)
                        {
				printf("%s%s", str, separator);
                        }
                        else
                        {
                                printf("%s", str);
                        }
                }
        }
        printf("\n");
        va_end(ap);
}
