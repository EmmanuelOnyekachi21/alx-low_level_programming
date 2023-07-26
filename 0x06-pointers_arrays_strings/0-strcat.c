#include <stdio.h>
#include "main.h"
/**
 * *_strcat - Entry point
 *
 * @dest: Destination
 * @src: Source
 * Description: concatenates two strings
 *
 * Return: Return dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, x;
	char *str = dest;

	while (*dest++)
		length++;

	/* Reset the 'dest' pointer to the beginning of the string */
	dest = str;

	for (x = 0; src[x] != '\0'; x++)
		*(dest + length + x) = *(src + x);

	dest[length + x] = '\0';

	return (dest);
}
