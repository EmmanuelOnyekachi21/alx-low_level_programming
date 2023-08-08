#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point
 *
 * @size: Size of array.
 * @c: Array would be filled with 'c'.
 * Description: creates an array of chars, and initializes with a specific char
 *
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = (char *)malloc(sizeof(unsigned int) * size);

	if (str == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(str + i) = c;
	return (str);
}
