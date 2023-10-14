#include <stdio.h>
#include "main.h"
/**
 * create_file - Entry point.
 * @filename: The name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Description: creates a file.
 *
 * Return: Return 0 if successful.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length = 0, bytes_write;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[length++])
		;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	bytes_write = write(fd, text_content, length);
	if (bytes_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
