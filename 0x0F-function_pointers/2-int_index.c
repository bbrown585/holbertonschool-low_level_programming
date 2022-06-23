#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: pointer
 * Return: idk
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
	{
	for (i = 0; i < size ; i++)
		{
		if (cmp(array[i] != 0))
			return (i);
		}
	}

	return (-1);
}
