#include "holberton.h"
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
        ff = open (argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", ff);
		exit(98);
	}
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", ft);
		exit(99);
	}
	r = read(ff, buff, 1024);
	while (r > 0)
	{
		write(ft, buff, r);

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
