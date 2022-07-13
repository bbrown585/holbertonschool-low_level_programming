#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unit
 *
 * Return:
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (!b)
		return (0);

	for (num = 0; *b; b++)
	{
		

