#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit -sets the value of a bit to 0
 * @n: the number
 * @index: index
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num = 0;

	if (index > 64)
		return (-1);

	num = 1 << index;
	*n = (*n & ~num) | ((0 << index) & num);
	return (1);
}
