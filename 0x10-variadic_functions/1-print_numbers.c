#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator:string
 * @n: number
 * Return: none.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list param;

	va_start(param, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(param, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(param);
}
