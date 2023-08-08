#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Entry point
 *
 * @s1: String 1
 * @s2: String to be concatenated.
 *
 * Description: concatenates two strings.
 *
 * Return: returns pointer to newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, length_1, length_2, TotalLength;


	length_1 = 0;
	while (s1[length_1])
		length_1++;

	if (s2 == NULL)
		s2 = "";
	else
	{
		length_2 = 0;
		while (s2[length_2])
			length_2++;
	}

	TotalLength = (length_1 + length_2);
	ptr = (char *)malloc(sizeof(char) * (TotalLength + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < length_1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < length_2)
	{
		ptr[length_1 + i] = s2[i];
		i++;
	}
	ptr[TotalLength] = '\0';

	return (ptr);
}
