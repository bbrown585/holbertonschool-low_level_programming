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

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (row = 0; row < size; size++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
			putchar('\n');
		}
	
}
