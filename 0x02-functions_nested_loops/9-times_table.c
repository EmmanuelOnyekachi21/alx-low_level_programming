#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: prints the 9 times table, starting with 0
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int i, j, product, firstdigit, lastdigit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (product <= 9)
				_putchar(product + '0');
			else
			{
				firstdigit = product / 10;
				_putchar(firstdigit + '0');
				lastdigit = product % 10;
				_putchar(lastdigit + '0');
			}
			if (j == 9)
				continue;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
