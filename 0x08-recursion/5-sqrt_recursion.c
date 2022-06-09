#include "main.h"
#include <stdio.h>

/**
 * squirt_r - square root of number
 * @n: idk
 * @i: idk
 *
 * Return: 0,-1.
 */
int squirt_r(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (squirt_r(n, i + 1));
}


/**
  * _sqrt_recursion - finds sqrt
  * @n: idk
  *
  * Return: sqrt
  *
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squirt_r(n, 0));
}
