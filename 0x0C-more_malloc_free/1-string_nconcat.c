#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to be copied.
 *
 * Description: concatenates two strings.
 *
 * Return: Return a pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_1 = 0, length_2 = 0, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length_1])
		length_1++;

	while (s2[length_2])
		length_2++;

	ptr = malloc(sizeof(char) * (length_1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < length_1)
	{
		ptr[i] = s1[i];
		i++;
	}

	if (n > length_2)
		n = length_2;
	i = 0;
	while (i < n)
	{
		ptr[length_1 + i] = s2[i];
		i++;
	}
	ptr[length_1 + n] = '\0';

	return (ptr);
}
