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
	unsigned int value = 1;
	char *ptr = (char *)&value;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
