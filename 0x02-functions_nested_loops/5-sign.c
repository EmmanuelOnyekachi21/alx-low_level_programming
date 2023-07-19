#include <stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n: Number whose sign we're working out
 *
 * Description: prints the sign of a number.
 *
 * Return: Return 1 if n > 0, Return 0 if n = 0, Return -1 if n < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
