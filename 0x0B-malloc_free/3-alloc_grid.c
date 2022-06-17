#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - 2 dimensional array
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{

	int grid;
	int x;
	int y;
	int i;
	int **ar;

	if (width < 1 || height < 1)
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (grid = 0; grid < i; grid++)
			{
				free(ar[grid]);
			}
			free(ar);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			ar[x][y] = 0;
		}
	}
	return (ar);
}
