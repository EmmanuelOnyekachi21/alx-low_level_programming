#include <stdio.h>
#include "main.h"
/**
 * print_line - Entry point
 *
 * @n: Number of times line is printed
 * Description: draws a straight line in the terminal
 *
 * Return: Returns nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
