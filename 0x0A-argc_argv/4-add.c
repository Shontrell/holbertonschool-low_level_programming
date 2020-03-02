#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: int
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 'a' && atoi(argv[i]) <= 'z')
			{
				printf("Error\n");
				return (1);
			}

			sum = sum + (atoi(argv[i]));
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
