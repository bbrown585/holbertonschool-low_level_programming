#include "main.h"
#include <stdio.h>

/**
 * print_line - print
 * @n: idk
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
		putchar(95);
	}
		putchar('\n');
	}
}
