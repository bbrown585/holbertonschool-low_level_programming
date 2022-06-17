#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - two dimensional grid
 * @grid: the grid
 * @height: height
 * Return: none
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
