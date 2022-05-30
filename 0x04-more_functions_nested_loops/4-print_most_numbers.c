#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - zero to nine
 * ch: idk
 * Return: 0.
 */
void print_most_numbers(void)
{
char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		if ((ch == '2' && ch == '4'))
			putchar(ch);
	}
		putchar('\n');
}
