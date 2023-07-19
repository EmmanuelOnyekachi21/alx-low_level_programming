#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry point
 *
 * @n: Number whose absolute value is to be computed.
 * Description: computes the absolute value of an integer.
 *
 * Return: Returns absolute value of a number
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
