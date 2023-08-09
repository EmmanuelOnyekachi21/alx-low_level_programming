#include <stdio.h>
#include "main.h"
/**
 * check_digit - Entry point
 *
 * @str: Input strings.
 *
 * Description: checks if character is digit.
 *
 * Return: Return 0 if successful otherwise false.
 */

int check_digit(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
