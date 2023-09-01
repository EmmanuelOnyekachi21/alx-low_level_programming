#include <stdio.h>
#include "main.h"
/**
 * set_bit - Entry point.
 *
 * @n: Pointer to an unsigned long integer where the bit will be set.
 * @index: Index of the bit to set.
 *
 * Description: sets the value of a bit to 1 at a given index.
 *
 * Return: Return 1 if success else 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned int) * 8))
		return (-1);

	mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
