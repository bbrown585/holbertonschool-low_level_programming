#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory
 * @s: array
 * @b: value
 * @n: third party
 * Return: 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
		s[i] = b;
	return (s);
}
