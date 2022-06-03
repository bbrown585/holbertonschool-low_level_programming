#include "main.h"
#include <stdio.h>

/**
 * print_square - idk
 * @size: sizes
 * Return: void
 */
void print_square(int size)
{
	int line, row;

	if (size < 0)
	{
		putchar('\n');
	}
	else
	{
		for (line = 0; line < size; line++)
		{
			for (row = 0; row < size; row++)
			{
				putchar('#');
			}
			putchar('\n');

		}
	}
}
