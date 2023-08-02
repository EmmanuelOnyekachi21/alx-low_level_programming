#include <stdio.h>
#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to the memory area to be filled.
 * @b: Constant byte to be copied into memory.
 * @n: Number of bytes to be filled.
 *
 * Description: fills d 1st n bytes of memory pointed by s with constant byte b
 *
 * Return: Return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	if (n <= 0)
		return (NULL);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (start);
}
