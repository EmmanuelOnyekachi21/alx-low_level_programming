#include <stdio.h>
#include "main.h"
/**
 * *cap_string - Entry point
 *
 * @str: Pointer to input string.
 *
 * Description: capitalizes all words of a string.
 *
 * Return: Return pointer to a string
 */

char *cap_string(char *str)
{
	char *result = str;	/* Pointer to the beginning of the string */

	if (*str >= 'a' && *str <= 'z')
	{
		*str -= ('a' - 'A');
		str++;
	}
	while (*str)
	{
		switch (*str)
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				str++; /* Move to the next character after handling separators */
				if (*str >= 'a' && *str <= 'z')
				{
					*str -= ('a' - 'A');
				}
				break; /* Don't forget the break statement to exit the case block */
			default:
				str++;
		}
	}
	return (result);
}
