#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of the day starting from 00:00 to 23:59.
 *
 * Return: return nothing
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 24; i++)
	{
		for (k = 0; k <= 59; k++)
		{
			j = i / 10;
			_putchar(j + '0');
			j = i % 10;
			_putchar(j + '0');
			_putchar(':');
			l = k / 10;
			_putchar(l + '0');
			l = k % 10;
			_putchar(l + '0');
			_putchar('\n');
		}
	}
}
