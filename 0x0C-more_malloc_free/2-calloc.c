#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocate memory for and array
 * @nmemb: number
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

char *b;
unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	b = malloc(size * nmemb);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		b[i] = '\0';
	}
		return (b);
}
