#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to a filename
 * @text_content: string to write to the file
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, w;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[i] != '\0')
	{
		i++;
	}
	w = write(fd, text_content, i);
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
