#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - Entry point
 *
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes to be copied.
 * Description: copies n bytes of the src string
 *
 * Return: Return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n)
	{
		dest[x] = src[x];

		if (*(src + x) == '\0')
			break;
		x++;
	}

	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}

	return (dest);
}
