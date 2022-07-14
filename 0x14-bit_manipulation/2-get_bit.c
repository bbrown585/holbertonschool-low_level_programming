#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: the number
 * @index: index
 * Return: value of bit of -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if (((n >> index) & 1) == 1)
		return (1);
	else
		return (0);
}
