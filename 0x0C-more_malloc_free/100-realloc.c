#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory previously allocated with a call to malloc.
 * @old_size: the size, in byttes, of the allocated space for `ptr`.
 * @new_size: the new size, in bytes, of the new memory block.
 *
 * Return: a pointer to the newly allocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr, *new_ptr_char;
	unsigned int i, min_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));


	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy contents from old block to new block. */
	min_size = (old_size < new_size) ? old_size : new_size;
	old_ptr = (char *)ptr;
	new_ptr_char = (char *)new_ptr;

	for (i = 0; i < min_size; i++)
		new_ptr_char[i] = old_ptr[i];

	free(ptr);

	return (new_ptr);
}
