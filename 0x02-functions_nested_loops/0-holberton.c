#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
char arr[10] = "Holberton";
int A = 0;

while (A < 10)
{
_putchar(arr[A]);
A++;
}
_putchar('\n');
return (0);
}
