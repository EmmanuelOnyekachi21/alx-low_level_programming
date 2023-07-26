#include <stdio.h>
#include "main.h"
/**
 * rev_string - Entry point
 *
 * @s: String to be reversed.
 * Description: reverses a string.
 *
 * Return: Return nothing
 */

void rev_string(char *s)
{
	int counter = 0, i;
	char temp;
	char *start = s;	/* Store the original address of the string */

	while (*s++)
		counter++;
	counter--;
	s = start;	/* Reset 's' pointer to the original starting address */

	for (i = 0; i < counter / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + counter - i);
		*(s + counter - i) = temp;
	}
}
