#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 *
 * @min: Minimum Value of array
 * @max: Maximum Value of array
 * Description: creates an array of integers.
 *
 * Return: Return pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int counter = 0;

	if (min > max)
		return (NULL);

	counter = max - min;
	counter += 1;

	ptr = malloc(counter * (sizeof(int)));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < counter; i++)
		ptr[i] = min + i;
	return (ptr);
}
