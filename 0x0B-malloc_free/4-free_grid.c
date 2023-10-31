#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid -  function that frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: input
 * @height: input
 * Return: string of dimensional grid.
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

