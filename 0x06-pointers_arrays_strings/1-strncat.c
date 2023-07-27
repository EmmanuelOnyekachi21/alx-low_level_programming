#include <stdio.h>
#include "main.h"
/**
 * *_strncat - Entry point
 *
 * @dest: Destination
 * @n: Most byte to be copied from src
 * @src: Source
 * Description: concatenates two strings, it will use at most n bytes from src.
 *
 * Return: Return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, x;
	char *str = dest;

	while (*dest++)
		length++;

	/* Reset the 'dest' pointer to the beginning of the string */
	dest = str;

	x = 0;
	while (x < n)
	{
		*(dest + length + x) = *(src + x);
		/* Stop copying if null character is encountered */
		if (src[x] == '\0')
			break;
		x++;
	}

	*(dest + length + x) = '\0';

	return (dest);
}
