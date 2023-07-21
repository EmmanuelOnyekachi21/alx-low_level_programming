#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Returns nothing
 */

void print_numbers(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
		_putchar(counter + '0');
	_putchar('\n');
}
