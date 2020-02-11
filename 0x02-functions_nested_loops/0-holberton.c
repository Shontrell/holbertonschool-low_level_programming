#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
char arr[9] = "Holberton";
int A = 0;

while (A < 9)
{
_putchar(arr[A]);
A++;
}
_putchar('\n');
return (0);
}
