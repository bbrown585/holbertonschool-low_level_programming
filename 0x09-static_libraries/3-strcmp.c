#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare string
 * @s1: string
 * @s2: string
 *
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		break;
	}
	return (*s1 - *s2);
}
