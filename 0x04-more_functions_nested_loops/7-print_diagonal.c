#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * @n: Number of diagonals to be printted.
 *
 * Description: draws a diagonal line on the terminal.
 *
 * Return: Returns nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
