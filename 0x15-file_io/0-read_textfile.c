#include <stdio.h>
#include "main.h"
/**
 * read_textfile - Entry point.
 * @filename: Pointer to string specifying the name of the file to be read.
 * @letters: Number of characters intended to be read from the file.
 *
 * Description: reads a text file and prints it to the POSIX standard output.
 *
 * Return: Return
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	int fd;

	char *buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_read);
}
