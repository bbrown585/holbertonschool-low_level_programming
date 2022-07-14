#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unit
 * @b: binary string
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;

	if (!b)
		return (0);

	for (len = 0; *b; b++)
	{
		if (*b == '1')
			len = (len << 1) | 1;
		else if (*b == '0')
			len <<= 1;
		else
			return (0);
	}
	return (len);
}
