#include "main.h"

/**
 * print_rev - reverse
 * @s: string
 *
 * Return: 0.
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_reverse(s + 1);
		putchar("d", *s);
	}
}
