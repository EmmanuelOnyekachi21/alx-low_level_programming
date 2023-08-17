#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Entry point.
 *
 * @array: Array of integers.
 * @size: Number of elements in the array array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Description: searches for an integer.
 *
 * Return: Returns int value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		i = 0;

		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
