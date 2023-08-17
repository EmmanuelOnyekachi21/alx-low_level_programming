#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Entry point
 *
 * @array: Array of integers
 * @size: Size of array
 * @action: pointer to the function you need to use.
 *
 * Description: executes a funx. given as parameter on each element of array.
 *
 * Return: Returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
