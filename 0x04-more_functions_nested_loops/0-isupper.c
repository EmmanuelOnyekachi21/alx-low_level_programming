#include <stdio.h>
#include "main.h"
/**
 * _isupper - Entry point
 *
 * @c: Input variable
 *
 * Description: checks for uppercase character.
 *
 * Return: Returns 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
