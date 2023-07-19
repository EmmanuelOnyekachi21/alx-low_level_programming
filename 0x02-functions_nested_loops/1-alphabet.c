#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: prints lowercase alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
