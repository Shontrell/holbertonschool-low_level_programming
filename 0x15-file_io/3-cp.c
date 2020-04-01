#include "holberton.h"
#define SE STDERR_FILENO
/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: where arguments are stored
 * Return: 0
 */
int main(int argc, char **argv)
{
	int ft, ff, r, c1, c2, w;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(SE, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ff = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || ff == -1)
	{
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (ft == -1)
	{
		dprintf(SE, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	r = read(ff, buff, 1024);
	if (r == -1)
	{
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (r > 0)
	{
		w = write(ft, buff, r);
		if (w == -1)
		{
			dprintf(SE, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		read(ff, buff, 1024);

	}
	c1 = close(ff);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", ff);
		exit(100);
	}
	c2 = close(ft);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", ft);
		exit(100);
	}
	return (0);
}
