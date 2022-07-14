#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int b;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	for (b = 1UL << 63; b > 0; b >>= 1)
	{
		if (n & b)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
	}
}
