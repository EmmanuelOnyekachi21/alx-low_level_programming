#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Entry point.
 *
 * @d: Struct
 *
 * Description: Frees the dog struct.
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
