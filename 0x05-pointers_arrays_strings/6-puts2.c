#include <stdio.h>
#include "main.h"
/**
 * puts2 - Entry point
 *
 * @str: The string to be manipulated
 *
 * Description: prints every other character of a string, starting with the 1st
 *
 * Return: Returns nothing
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
