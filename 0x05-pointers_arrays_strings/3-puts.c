#include <stdio.h>
#include "main.h"
/**
 * _puts - Entry point
 *
 * @str: Contains string to be printed.
 *
 * Description: prints a string, followed by a new line, to stdout.
 *
 * Return: Return nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
