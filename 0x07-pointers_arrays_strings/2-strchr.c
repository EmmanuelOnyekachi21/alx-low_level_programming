#include <stdio.h>
#include "main.h"
/**
 * _strchr - Entry point
 *
 * @s: Pointer to string
 * @c: Character to be searched for.
 *
 * Description: locates a character in a string.
 *
 * Return: Return pointer to 1st occurence of character 'c' or NULL.
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
