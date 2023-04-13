#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - The program frees 2D array
 * @grid: The grid
 * @height:Height dimension
 *
 * Return: 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
