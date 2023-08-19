#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - Entry point.
 *
 * @n: Indicates the number of argument passed.
 *
 * Description: returns the sum of all its parameters.
 *
 * Return: 0 if n = 0, otherwise returns sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
