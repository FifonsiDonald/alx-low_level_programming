#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees the memory allocated by a 2D array
 *@grid: 2D array
 *@height: height of the array
 *
 *Return: a pointer to the array else NULL.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
