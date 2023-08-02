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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
