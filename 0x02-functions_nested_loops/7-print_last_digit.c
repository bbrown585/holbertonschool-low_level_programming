#include "main.h"

/**
 * print_last_digit - idk
 * @b: -idk
 * Return: Always 0.
 */

int print_last_digit(int b)
{
	b = (b % 10);
	if (b < 0)
	b = b * -1;
	_putchar(b + 48);
	return (b);
}
