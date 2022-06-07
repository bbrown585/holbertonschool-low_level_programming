#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - cap string letters
 * @s: string
 *
 * Return: 0.
 */
char *string_toupper(char *s)
{
	char *p = s;

	for (; *s; s++)
	{
		if (*s > 96 && *s < 123)
		{
			*s = *s - 32;
		}
	}
	return (p);
}
