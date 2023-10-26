#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Entry point.
 *
 * @n: NUmber 1.
 * @m: NUmber 2.
 *
 * Description: returns the number of bits needed\
 * \to flip to get from a number to another
 *
 * Return: Return number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
