#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Entry point
 *
 * @filename: Name of file
 * @letters: number of letters it should read and print.
 *
 * Description: reads a text file and prints it to output.
 *
 * Return: Return length of characters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t text;

	char *buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (filename == NULL || fd == -1)
		return (0);

	text = read(fd, buffer, letters);
	if (text == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write(STDOUT_FILENO, buffer, text);
	close(fd);
	free(buffer);
	return (text);
}
