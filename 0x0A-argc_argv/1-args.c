#include <stdio.h>
/**
 * main - Entry point
 * @argc: int
 * @argv: pointer
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	int num = argc - 1;

	printf("%d\n", num);
		return (0);
}
