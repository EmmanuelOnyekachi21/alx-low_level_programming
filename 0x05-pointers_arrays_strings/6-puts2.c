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
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 != 0)
			continue;
		else
			_putchar(*(str + i));
	}
	_putchar('\n');
}
