#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - create an array of intergers
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int b;
	int k = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (b = min; b <= max; b++)
	{
		arr[k] = b;
		k++;
	}
	return (arr);
}

