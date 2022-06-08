#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - cap all words of a string
 * @s: string
 *
 * Return: 0.
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 1;
	char *answer = s;
	char *diff = " \t\n;,.!?\"(){}\0";

	while (*s)
	{
		if (j)
		{
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
			j = 0;
		}
		for (i = 0; diff[i]; i++)
		{
			if (*s == diff[i])
				j = 1;
		}
		s++;
	}
	return (answer);
}
