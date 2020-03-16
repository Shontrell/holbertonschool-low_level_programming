#include "calc.h"
#include <stdio.h>
/**
 * (*get_op_func(char *s)) - selects the correct function to perform operation
 * @s: operator needed for operation
 * Return: pointer to a function corresponding to the given operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[i] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
