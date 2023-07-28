#include <stdio.h>
#include "main.h"
/**
 * *leet - Entry point
 *
 * @s: String to be modified.
 *
 * Description: encodes a string into 1337.
 *
 * Return: Return pointer to modified string.
 */

char *leet(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		else if (*s == 'e' || *s == 'E')
			*s = '3';
		else if (*s == 'o' || *s == 'O')
			*s = '0';
		else if (*s == 't' || *s == 'T')
			*s = '3';
		else if (*s == 'l' || *s == 'L')
			*s = '1';
		s++;
	}
	return (ptr);
}
