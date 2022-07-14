#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 * @n: the number
 * @index: the position
 * Return: 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num = 0;

	if (index > 64)
		return (-1);

	num = 1 << index;
	*n = (*n & ~num) | ((1 << index) & num);
	return (1);
}
