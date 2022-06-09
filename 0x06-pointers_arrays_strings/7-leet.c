#include "holberton.h"

/**
 * *leet - encode 1337
 * @x: string
 *
 * Return: 0.
 */
char *leet(char *x)
{
	int i = 0;
	char *answer = x;
	char *letter = "aAeEoOtTlL";
	char *number = "4433007711";

	while (*x)
	{
		for (i = 0; letter[i]; i++)
		{
			if (*x == letter[i])
			{
				*x = number[i];
			}
		}
		x++;
	}
	return (answer);
}
