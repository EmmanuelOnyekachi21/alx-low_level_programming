#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Entry point.
 *
 * Description: checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *bytePtr = (unsigned char *)&num;

	/* If the LSB is 1, it's little endian.  otherwise its big endian. */
	return ((int) *bytePtr);
}
