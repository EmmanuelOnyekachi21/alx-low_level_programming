#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Entry point.
 *
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 *
 * Description: frees a 2 dimensional grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
