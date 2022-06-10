#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concat
 * @src: pointers
 * @dest: pointers
 *
 * Return: 0.
 */
char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (begin);
}
