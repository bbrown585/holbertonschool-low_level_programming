#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check code
 * @c: idk
 * Return: 0 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
