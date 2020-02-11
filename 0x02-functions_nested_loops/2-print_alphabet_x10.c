#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int z;
int x;

for (z = '0'; z <= '9'; z++)
{
for (x = 97; x <= 122; x++)
_putchar (x);
_putchar ('\n');
}
}
