#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * isdigit - idk
 * @c: idk
 *
 * Return: 0 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
