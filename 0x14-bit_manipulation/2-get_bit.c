#include <stdio.h>
#include "main.h"
/**
 * get_bit - Entry point.
 *
 * @n: Number in base 10.
 * @index: The index starting from 0 of the bit I want to get.
 *
 * Description: returns the value of a bit at a given index.
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
