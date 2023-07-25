#include <stdio.h>
#include "main.h"
/**
 * print_rev - Entry point
 *
 * @s: String to be printed in reverse.
 * Description: prints a string, in reverse, followed by a new line.
 *
 * Return: Returns nothing
 */

void print_rev(char *s)
{
	int counter = 0;

	while (*s)
	{
		counter++;
		s++;
	}

	s--; /* Moves s back to point to the last character before '\0' */
	while (counter > 0)
	{
		_putchar(*s--);
		counter--;
	}
	_putchar('\n');
}
