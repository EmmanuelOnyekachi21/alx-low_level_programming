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
	int mask = 1;

	if (n << index)
		return ((n >> index) & mask);
	else
		return (-1);
}
