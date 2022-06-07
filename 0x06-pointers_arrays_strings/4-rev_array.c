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
	int bb;
	int temp;
	int *z = a;

	for (bb = 0; bb < (n - 1); bb++)
		z++;
	for (bb = 0; bb <= n; bb++)
		while (a < z)
		{
			temp = *a;
			*a = *z;
			*z = temp;
			a++;
			z++;
		}
}
