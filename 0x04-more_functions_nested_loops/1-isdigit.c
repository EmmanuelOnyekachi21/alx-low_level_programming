#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point
 *
 * @c: Input variable
 *
 * Description: checks for a digit(0 through 9)
 *
 * Return: Returns 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	int i = 48;

	while (i <= 57)
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);
}
