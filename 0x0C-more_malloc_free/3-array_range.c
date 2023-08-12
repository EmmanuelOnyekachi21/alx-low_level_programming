#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 *
 * @min: Value of array
 * @max: Value of array
 * Description: creates an array of integers.
 *
 * Return: Return pointer
 */

int *array_range(int min, int max)
{
        int index, i = 0;
        int *ptr;
        int counter = 0;

        if (min > max)
                return (NULL);

        counter = max - min;
        counter += 1;

        ptr = malloc(counter * sizeof(int));
        if (ptr == NULL)
                return (NULL);

        for (index = min; index <= max; index++)
        {
                ptr[i] = index;
                i++;
        }
        return (ptr);
}
