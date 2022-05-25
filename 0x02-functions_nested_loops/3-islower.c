#include "main.h"

/**
 * _islower - none
 * @c: none
 * Return: none
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
