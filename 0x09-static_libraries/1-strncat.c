#include "main.h"
#include <stdio.h>

/**
 * *_strncat - two strings
 * @dest: start
 * @src: end
 * @n: third party
 * Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest)
		dest++;
	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
			break;
	}
	return (start);
}
