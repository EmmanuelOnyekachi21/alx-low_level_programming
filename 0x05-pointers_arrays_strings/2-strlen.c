#include <stdio.h>
#include "main.h"
/**
 * _strlen - Entry point
 *
 * @s: Pointer
 * Description: returns the length of a string.
 *
 * Return: Returns length of string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s++)
		counter++;
	return (counter);
}
