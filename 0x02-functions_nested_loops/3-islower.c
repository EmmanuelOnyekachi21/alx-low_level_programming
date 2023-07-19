#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: checks for lowercase character.
 * @c: Charcter to be checked.
 *
 * Return: 1 if lowercase; 0 if otherwise
 */

int _islower(int c)
{
	int counter;

	for (counter = 97; counter <= 122; counter++)
	{
		if (c == counter)
			return (1);
	}
	return (0);
}
