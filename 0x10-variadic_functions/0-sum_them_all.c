#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: number
 *
 *
 * Return: sum of parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	int sum = 0;
	unsigned int i;

	va_start(param, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(param, int);
	}
	va_end(param);
	return (sum);
}
