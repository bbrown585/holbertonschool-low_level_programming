#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create and array
 * @size: size of
 * @c: count value
 *
 * Return: pointer to array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc((size) * sizeof(char));

	if ((size == 0) || (ar == NULL))
{
		return (NULL);
}
i = 0;
while (i < size)
{
	ar[i] = c;
	i++;
}
return (ar);
}
