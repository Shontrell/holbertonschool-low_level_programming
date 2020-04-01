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
	int ft, ff, r, c1, c2;
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
		write(ft, buff, r);
		read(ff, buff, 1024);

	}
	c1 = close(ff);
	if (c1 == -1)
	{
		dprintf(SE, "Can't close fd %s\n", argv[1]);
		exit(100);
	}
	c2 = close(ft);
	if (c2 == -1)
	{
		dprintf(SE, "Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
