#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - Entry point.
 * @filename: The name of the file to create.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Description: appends text at the end of a file.
 *
 * Return: Return 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0, bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	while (text_content[length])
		length++;

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
