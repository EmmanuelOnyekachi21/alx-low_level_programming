#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Entry point
 *
 * @x: Number.
 * @y: Raised to the powwer of
 *
 * Description: returns the value of x raised to the power of y.
 *
 * Return: Return value of x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
