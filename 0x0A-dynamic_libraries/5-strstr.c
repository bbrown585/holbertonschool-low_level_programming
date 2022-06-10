#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locate substring
 * @haystack: idk
 * @needle: idk
 *
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
const char *h;
const char *n;
h = haystack;
n = needle;

if (*n == 0)
{
	return (haystack);
}
for (haystack = haystack; *haystack != 0; haystack += 1)
{
	if (*haystack != *n)
	{
		continue;
	}
	h = haystack;
	while (1)
	{
		if (*h++ != *n++)
		{
			break;
		}
		if (*n == 0)
		{
			return (haystack);
		}
	}
	n = needle;
}
return ('\0');
}
