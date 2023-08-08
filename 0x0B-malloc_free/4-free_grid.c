#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free 2D array
 * @grid: width of the array
 * @height: height of the array
 * Return: nothing
 **/

void free_grid(int **grid, int height)
{
	int i;

	if (height == NULL)
		return;
	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
