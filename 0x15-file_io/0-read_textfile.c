#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to filename
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	ssize_t i;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		return (0);
	}
	read(fd, str, letters);
	str[letters] = '\0';
	for (i = 0; i < (ssize_t) letters && str[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, str, i);
	close(fd);
	return (i);
}
