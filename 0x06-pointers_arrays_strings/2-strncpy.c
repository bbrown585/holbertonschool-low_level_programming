#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - copy strings
 * @dest: start
 * @src: end
 * @n: third party
 * Return: 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int bb = 0;
	char *start = dest;

	for (; bb < n && src[bb] != '\0'; bb++)
		start[bb] = src[bb];
	for (; bb < n; bb++)
		start[bb] = '\0';
	return (start);
}
