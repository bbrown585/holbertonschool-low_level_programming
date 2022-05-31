#include "main.h"
#include <stdio.h>

/**
 * more_numbers - idk
 *
 *
 * Return:
 */
void more_numbers(void)
{
	char i, b;

	for (i = 0; i < 9; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				putchar((i / 10));
					putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
