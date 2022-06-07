#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse reverse
 * @a: array
 * @n: idk
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int temp;
	int *z = a;

	for (b = 0; b < (n - 1); b++)
		z++;
	for (b = 0; b <= n; b++)
		while (a < z)
		{
			temp = *a;
			*a = *z;
			*z = temp;
			a++;
			z--;
		}
}
