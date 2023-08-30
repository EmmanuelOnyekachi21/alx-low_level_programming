#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Entry point
 *
 * @n: Number whose natural root is to be found
 *
 * Description: returns the natural square root of a number.
 *
 * Return: The square root of the number, or -1 if no natural square root.
 */

int check_sqrt(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (check_sqrt(n, n/2));
}

/**
 * check_sqrt - Helper function to recursively find square root.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root
 *
 * Return: The square root or -1 if not found
 */

int check_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess <= 0)
		return (-1);

	return (check_sqrt(n, guess - 1));
}
