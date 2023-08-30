#include <stdio.h>
#include "main.h"
int check_divisor(int num, int div);
/**
 * is_prime_number - Entry point
 *
 * @n: input integer
 * Description: return 1 if input integer is a prime number, else return 0.
 *
 * Return: Returns 1 if prime number else 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (check_divisor(n, div));
}

/**
 * check_divisor - check if num is divisible
 * @num: the number to be checked
 * @div: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int check_divisor(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (check_divisor(num, div + 1));
}
