#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Entry point.
 * @d: Dog structure.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: initialize a variable of type struct dog
 *
 * Return: Return nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
