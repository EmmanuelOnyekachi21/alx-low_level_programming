#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - Entry point.
 *
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Description: prints strings, followed by a new line.
 *
 * Return: Returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
		printf("\n");

		va_end(args);
}
