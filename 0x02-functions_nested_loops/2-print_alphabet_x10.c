#include <stdio.h>
#include "main.h"
/**
 *  print_alphabet_x10 - Entry point
 *
 * Description: prints lowercase 10 times
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i; /* Counter */
	char letters;

	for (i = 0; i < 10; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
