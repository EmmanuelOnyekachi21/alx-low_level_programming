#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Entry point
 *
 * @b: points to a string of 0 and 1 chars.
 *
 * Description: converts a binary number to an unsigned int.
 *
 * Return: Returns converted number if succesful, else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int counter = 0, i, sum = 0, length;

	if (b == NULL)
		return (0);

	while (b[counter] != '\0')
		counter++;

	length = counter - 1;

	for (i = 0; i < counter; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		sum += (b[i] - '0') << length;
		length--;
	}
	return (sum);
}
