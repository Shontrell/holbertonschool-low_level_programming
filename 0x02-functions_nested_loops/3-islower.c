#include "holberton.h"
/**
 * _islower - Entry point
 *
 * @c: int passed as argument to the function
 * Return: 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{ return (0);
}
}
