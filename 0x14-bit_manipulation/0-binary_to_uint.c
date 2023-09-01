#include <stdio.h>
#include <stdlib.h>
#include "main.h"
unsigned int powerOfTwo(unsigned int exponent);
unsigned int length(const char *b);
/**
 * binary_to_uint - Entry point
 * @b: Points to a string of 0 and 1 chars.
 *
 * Description: converts a binary number to an unsigned int.
 *
 * Return: converted number or 0 if NULL or string != 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, temp;
	int i, len;

	if (b == NULL)
		return (0);

	len = length(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		temp = b[i] - '0';
		sum += temp * powerOfTwo(len - 1 - i);
	}
	return (sum);
}

/**
 * pow - function to calculate power
 * @exponent: Represents the power
 * Return: 1 if exponent == 0 or value
 */
unsigned int powerOfTwo(unsigned int exponent)
{
	if (exponent == 0)
		return (1);
	else
		return (2 * powerOfTwo(exponent - 1));
}
/**
 * length - Entry point.
 * @b: String containing 0s and 1s
 * Description: Returns length of a string.
 * Return: Length else NULL if b is NULL
 */
unsigned int length(const char *b)
{
	unsigned int count = 0, i;

	i = 0;
	while (b[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
