#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Entry point
 *
 * @width: Number of Rows.
 * @height: Number of columns.
 *
 * Description: returns a pointer to a 2 dimensional array of integers.
 *
 * Return: Returns matrix
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;

	int **matrix = (int **)malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(matrix[k]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}

	return (matrix);
}
