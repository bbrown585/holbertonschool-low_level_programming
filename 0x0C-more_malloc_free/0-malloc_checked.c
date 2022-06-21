#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: idk
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);
		if (pointer == NULL)
		{
			exit(98);
		}
	return (pointer);
}
