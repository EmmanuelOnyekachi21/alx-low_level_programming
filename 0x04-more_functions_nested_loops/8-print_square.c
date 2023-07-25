#include <stdio.h>
#include "main.h"
/**
 * print_square - Entry point
 *
 * @size: Size of the square
 * Description: prints a square,
 *
 * Return: Returns nothing
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}