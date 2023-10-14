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
	int fd, length = 0, i, bytes_write;
	char *ptr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[length++])
		;

	ptr = malloc((sizeof(char) * length) + 1);

	if (ptr == NULL)
		return (-1);
	for (i = 0; i < length; i++)
	{
		ptr[i] = text_content[i];
	}
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
	{
		free(ptr);
		return (-1);
	}
	bytes_write = write(fd, ptr, length);
	if (bytes_write == -1)
	{
		free(ptr);
		close(fd);
		return (-1);
	}

	free(ptr);
	close(fd);

	return (1);
}
