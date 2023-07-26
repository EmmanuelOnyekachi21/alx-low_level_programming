#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Entry point
 *
 * @dest: destination
 * @src: Source
 *
 * Description: copies the string pointed to by src to dest`.
 *
 * Return: Return dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
