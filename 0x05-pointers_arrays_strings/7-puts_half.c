#include <stdio.h>
#include "main.h"
/**
 * puts_half - Entry point
 *
 * @str: String to be manipulated.
 *
 * Description: prints half of a string, followed by a new line.
 *
 * Return: Return nothing
 */

void puts_half(char *str)
{
	int counter = 0, n;
	char *start = str;

	while (*str++)
		counter++;
	str = start;

	if (counter % 2 != 0)
		n = (counter + 1) / 2;
	else
		n = counter / 2;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
