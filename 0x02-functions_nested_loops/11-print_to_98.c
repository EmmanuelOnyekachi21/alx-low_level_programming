#include "main.h"
/**
 * print_negative_to_98 - Function Entry point
 *
 * Description: Prints all negative numbers from n to 98, followed by new line
 *
 * @n: Starting point.
 *
 * Return: Return nothing.
 */

void print_negative_to_98(int n)
{
	int i, number;

	for (i = n; i <= 98; i++)
	{
		if (i < 0)
		{
			number = i * -1;
			_putchar('-');
			_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
				_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
/**
 * print_greater_than_98_to_98 - Helper function.
 *
 * Description: Prints all natural numbers greater than 98 backward until 98,
 * followed by new line
 *
 * @n: Starting point.
 *
 * Return: Return nothing.
 */
void print_greater_than_98_to_98(int n)
{
	unsigned int i, first_digit, last_two_digits, middle, last_digit;

	for (i = n; i >= 98; i--)
	{
		if (i > 99)
		{
			first_digit = i / 100;
			last_two_digits = i % 100;
			middle = last_two_digits / 10;
			last_digit = last_two_digits % 10;
			_putchar(first_digit + '0');
			_putchar(middle + '0');
			_putchar(last_digit + '0');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
/**
 * print_to_98 - Function Entry point
 *
 * Description: Prints all natural numbers from n to 98, followed by new line
 *
 * @n: Starting point.
 *
 * Return: Return nothing.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		print_greater_than_98_to_98(n);
	}
	else if (n < 0)
	{
		print_negative_to_98(n);
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
				_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');

			}
		}
	}
	_putchar('\n');
}
