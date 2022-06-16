#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy of string given as a pararmeter
 * @str: string
 *
 * Return: NULL.
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *ar;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ar = malloc(sizeof(char) * (len + 1));

		if (ar == NULL)
		return (NULL);

	while ((ar[i] = str[i]) != '\0')
		i++;

	return (ar);
}
