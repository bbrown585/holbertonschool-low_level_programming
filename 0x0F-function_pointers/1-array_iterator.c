#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - execute a function given as a pararmeter
 * @array: arrary
 * @size: the size
 * @action: pointer
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (size < 1 || array == NULL || action == NULL)
	return;

for (; i < size ; i++)
action(array[i]);

}
