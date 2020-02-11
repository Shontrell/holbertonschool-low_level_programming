#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
int x = 97;

while (x <= 122)
{
_putchar (x);
x++;
}
_putchar ('\n');
}
