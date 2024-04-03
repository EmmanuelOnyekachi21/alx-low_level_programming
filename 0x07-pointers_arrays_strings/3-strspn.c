#include <stdio.h>
#include "main.h"
/**
 * _strspn - Get's the length of a prefix substring.
 *
 * @s: The string to search.
 * @accept: The string containing the characters to match.
 *
 * Return: the number of bytes in the initial segment of s which
 *		consists only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			return (i);
	}

	return (i);
}
