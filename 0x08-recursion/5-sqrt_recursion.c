#include "main.h"
int check_sqrt(int n, int guess);

/**
 * _sqrt_recursion - It returns the value of square guess of n.
 * @n: an input integer
 * Return: The square guess of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_sqrt(1, n));
}

/**
 * check_sqrt - find square guess
 * @n: nious value
 * @guess: square guess value
 * Return: the square guess
 */
int check_sqrt(int n, int guess)
{
	if (n > guess)
		return (-1);
	else if (n * n == guess)
		return (n);
	return (check_sqrt(n + 1, guess));
}
