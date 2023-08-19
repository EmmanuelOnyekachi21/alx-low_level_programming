#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - Entry point.
 *
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Description: prints numbers, followed by a new line.
 *
 * Return: Return nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d", va_arg(args, int));
				printf("%s", separator);
			}
			else
				printf("%d", va_arg(args, int));
		}
		putchar('\n');
	}
}
