#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: pointer
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
