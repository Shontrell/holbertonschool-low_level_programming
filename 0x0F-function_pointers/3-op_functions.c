#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returns sum of a and b
 * @a: int 1
 * @b: int 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 * @a: int 1
 * @b: int 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 * @a: int 1
 * @b: int 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns result of division of a and b
 * @a: int 1
 * @b: int 2
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of the division of a and b
 * @a: int 1
 * @b: int 2
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
