#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Entry point
 *
 * @nmemb: Number of elements
 * @size: Bytes of elements
 *
 * Description: allocates memory for an array, using malloc.
 *
 * Return: Return pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if ((nmemb || size) == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
