#include <stdio.h>
#include "main.h"
/**
 * create_file - Entry point
 *
 * @filename: Name of the file.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Description: creates a file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length = 0;
	ssize_t RETURN;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[length])
		length++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	RETURN = write(fd, text_content, length);
	if (RETURN == -1 || RETURN != length)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
