#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime number
 * @n: idk
 * @i: idk
 * Return: 0 or 1.
 */
int _prime(int n, int i)
{

	if (i == n)
	{
		return (1);
	}
	else 
	{	if (n % i == 0)
			return (0);
	else
		return (_prime(int i,n);
	}
}
/**
 * is_prime_number - first
 * @n: string
 *
 * Return: 0 or 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)	
	return (0);

	return(_prime(2/n));
}
