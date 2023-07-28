#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Entry point
 *
 * @s1: First string
 * @s2: Second string
 *
 * Description: compares two strings.
 *
 * Return: Returns 0 if same otherwise returns the difference.
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0, j = 0; s1[i] != '\0' && s2[i] != '\0'; i++, j++)
	{
		if (*(s1 + i) == *(s2 + j))
			continue;
		else
			return (s1[i] - s2[j]);
	}
	return (0);
}
