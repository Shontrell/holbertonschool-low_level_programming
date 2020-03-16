#include "calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: amount of arguments
 * @argv: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *c;
	int a, b, (*ptr)(int,int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ptr = (get_op_func(c));
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(c, "/") || strcmp(c, "%")) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ptr(a,b));
	return (1);
}
