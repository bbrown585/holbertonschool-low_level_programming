#include "main.h"
#include <stdio.h>

/**
 * *_memcpy -copy memory
 * @dest: array
 * @src: array
 * @n: third party
 * Return: 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
		dest[i] = src[i];
	return (dest);
}
