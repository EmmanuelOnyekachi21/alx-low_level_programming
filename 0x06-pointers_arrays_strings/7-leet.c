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
	const char s1[] = "aAeEoOtTlL";
	const char s2[] = "4433003311";
	int j;
	int size = (sizeof(s1)/sizeof(char) - 1);

	while (*s)
	{
		for (j = 0; j < size; j++)
		{
			if (*s == *(s1 + j))
				*s = *(s2 + j);
		}
		s++;
	}

	return (ptr);
}
