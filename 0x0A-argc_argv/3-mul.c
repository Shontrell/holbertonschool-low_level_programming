#include <stdio.h>
/**
 * main - Entry point
 * @argc: int
 * @argv: pointer
 * Return: 0
 */
int atoi(char *argv);

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * (atoi(argv[i]));
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
