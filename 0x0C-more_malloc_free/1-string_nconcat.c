#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * @n: idk
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
i{
	char *ptr;
	unsigned int i, len1, len2, *more;

	len1 = 0;
	len2 = 0;
	more = malloc(5);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len2])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	free(more);
	return (ptr);
}
