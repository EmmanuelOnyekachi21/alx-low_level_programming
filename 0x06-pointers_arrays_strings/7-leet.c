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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
		}
	}

	return (ptr);
}
