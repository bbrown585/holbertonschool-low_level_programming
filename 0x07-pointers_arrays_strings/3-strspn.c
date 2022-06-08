#include "main.h"
#include <stdio.h>

/**
 * _strspn - prefix substring
 * @s: array
 * @accept: array
 *
 * Return: 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int f = 0;

	for (; s[i]; i++)
	{
		for (f = 0; accept[f]; f++)
		{
			if (s[i] == accept[f])
			{
				break;
			}
		}
			if (s[i] != accept[f])
				break;
	}
	return (i);
}
