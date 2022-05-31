#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - hmm
 * @n: print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int b, k;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			for (k = 0; k < b; k++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
