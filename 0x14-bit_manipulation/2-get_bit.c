#include <stdio.h>
#include "main.h"
/**
 * get_bit - Entry point.
 *
 * @n: Number to extract bit from
 * @index: The index.
 *
 * Description: returns the value of a bit at a given index.
 *
 * Return: value of a bit at index or -1 if there's an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index >= (sizeof(unsigned int) * 8))
		return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
