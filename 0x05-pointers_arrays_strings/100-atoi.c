#include <stdio.h>
#include "main.h"
/**
 * _atoi - Entry point.
 * Description: Converts a string to an integer.
 * @s: The string to be converted to an integer.
 * Return: Returns an int value.
 */

int _atoi(char *s)
{
	unsigned int result = 0;

	/* Initialize sign to positive */
	int sign = 1, final = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			break;
	}

	/* Convert characters to integers */
	while (*s >= '0' && *s <= '9')
	{
		result *= 10;
		result += *s - '0';
		s++;
	}

	/* Apply signs to the final result */
	if (sign == -1)
		final = -result;
	else
		final = result;

	return (final);
}
