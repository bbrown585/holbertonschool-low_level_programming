#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk -search a string for set of bytes
 * @s: array
 * @accept: array
 *
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	char i, *p;

	for (i = *s; i != 0; s++, i = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (i == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
