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
	int capitalize_prompt = 1; /* Start by capitalizing first character */

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' || *str == ';' || *str == '.' || *str == '!' || *str == '?' || *str == '"' || *str == '(' || *str == ')' || *str == '{' || *str == '}')
			capitalize_prompt = 1;
		else if (*str >= 'a' && *str <= 'z' && capitalize_prompt)
		{
			*str -= ('a' - 'A');
			capitalize_prompt = 0;
		}
		str++;
	}

	return (result);
}
