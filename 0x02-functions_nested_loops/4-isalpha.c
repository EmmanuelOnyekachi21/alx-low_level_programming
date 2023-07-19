#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: Charcter to be procesed
 * Description: checks for alphabetic character.
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase.
 */

int _isalpha(int c)
{
	int counter1, counter2;

	for (counter1 = 65; counter1 <= 90; counter1++)
	{
		if (c == counter1)
			return (1);
	}

	for (counter2 = 97; counter2 <= 122; counter2++)
	{
		if (c == counter2)
			return (1);
	}

	return (0);
}
