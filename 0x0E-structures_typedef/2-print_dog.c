#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Entry point
 *
 * @d: DOg struct
 * Description: prints a struct dog
 * Return: Returns nothing.
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
