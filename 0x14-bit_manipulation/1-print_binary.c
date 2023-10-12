#include <stdio.h>
#include "main.h"
/**
 * print_binary - Entry point.
 *
 * @n: Number in base 10 to be converted to binary.
 *
 * Description: prints the binary representation of a number.
 *
 * Return: Returns nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
