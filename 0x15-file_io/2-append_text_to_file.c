#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - Entry point
 *
 * @filename: The name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Description: appends text at the end of a file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;
	ssize_t bytesread;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[length])
		length++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytesread = write(fd, text_content, length);
	if (bytesread == -1 || bytesread != length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
