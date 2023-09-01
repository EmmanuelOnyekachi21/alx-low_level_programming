#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Entry point
 *
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 * Description: Returns the number of bits 2 flip 2 convert a number to another
 * Return: The number of bits that need to be flipped to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		if (xor_result & 1)
			count++;
		xor_result >>= 1;
	}

	return (count);
}
