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
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433003311";
	int j;

	while (*s)
	{
		for (j = 0; j < 10; j++)
		{
			if (*s == *(s1 + j))
				*s = *(s2 + j);
		}
		s++;
	}

	return (ptr);
}
