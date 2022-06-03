#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy
 * @dest: idk
 * @src: idk
 * Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
