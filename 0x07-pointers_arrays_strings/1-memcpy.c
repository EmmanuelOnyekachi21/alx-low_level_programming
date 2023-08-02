#include <stdio.h>
#include "main.h"
/**
 * _memcpy - Entry point
 *
 * @dest: Destination of copied data.
 * @src: Source of data to be copied.
 * @n: Number of byte to be copied.
 *
 * Description: copies n bytes from memory area src to memory area dest.
 *
 * Return: Return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *start = dest;

	if (n <= 0 || src == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);
}
