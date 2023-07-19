#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: Number whose last number would be printed.
 *
 * Description: prints the last digit of a number.
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = -1 * (n % 10);
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = n % 10;
		_putchar(l + '0');
		return (l);
	}
}
