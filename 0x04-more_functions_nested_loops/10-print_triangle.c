#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Entry point
 *
 * @size: The size of the triangle
 *
 * Description: prints a triangle
 *
 * Return: Returns nothing
 */

void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* Calculate the number of spaces needed in each row */
		spaces = size - i;

		/* Print the spaces before the '#' characters */
		for (j = 1; j <= spaces; j++)
			_putchar(' ');

		for (j = 1; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
