#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function returning nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
