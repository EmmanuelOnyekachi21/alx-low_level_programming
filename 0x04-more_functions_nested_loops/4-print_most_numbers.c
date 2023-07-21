#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: prints the numbers, from 0 to 9, without 2 and 4.
 *
 * Return: Return nothing
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			i++;
		else
		{
			_putchar(i + '0');
			i++;
		}
	}
	_putchar('\n');
}
