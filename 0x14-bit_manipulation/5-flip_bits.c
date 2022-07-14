#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - count how many bits must be flipped
 * @n: number
 * @m: number
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int count = 0;

	while(i)
	{
		count += i & 1;
		i >>= 1;
	}
	return (i);
} 
