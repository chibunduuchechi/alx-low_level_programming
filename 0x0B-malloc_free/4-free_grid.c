#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - main entry point
 * Description: frees 2 dimension array
 * @height: height
 * @grid: two dimension grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);

	free(grid);
}
