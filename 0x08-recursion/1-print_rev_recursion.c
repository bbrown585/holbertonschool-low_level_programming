#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - reverse string
 * @s: string
 *
 * Return: 0.
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
