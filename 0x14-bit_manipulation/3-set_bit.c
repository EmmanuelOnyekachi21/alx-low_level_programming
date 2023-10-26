#include <stdio.h>
#include "main.h"
/**
 * set_bit - Entry point.
 *
 * @n: Pointer to the number in which the bit should be set.
 * @index: The index, starting from 0, of the bit should be set.
 *
 * Description: sets the value of a bit to 1 at a given index.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	mask = 1UL << index;

	*n |= mask;

	return (1);
}
