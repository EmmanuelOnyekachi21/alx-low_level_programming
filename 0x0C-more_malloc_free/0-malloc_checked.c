#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 *
 * @b: number of bytes.
 * Description: allocates memory using malloc.
 *
 * Return: Return a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
