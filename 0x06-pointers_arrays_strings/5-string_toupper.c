#include <stdio.h>
#include "main.h"
/**
 * *string_toupper - Entry point
 *
 * Description: changes all lowercase letters of a string to uppercase.
 *
 * @str: String containing the uppercase
 *
 * Return: Return a string
 */

char *string_toupper(char *str)
{
	char *position = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= ('a' - 'A');
		str++;
	}
	return (position);
}
