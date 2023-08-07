#include <stdio.h>
#include "main.h"
/**
 * factorial - Entry point
 *
 * @n: Number whose factorial is to be found
 *
 * Description: returns the factorial of a given number.
 *
 * Return: Factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
