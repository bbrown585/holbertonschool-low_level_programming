#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string
 * @n: number of int
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list param;
	char *pnt;

	va_start(param, n);

	for (i = 0; i < n; i++)
	{
		pnt = va_arg(param, char *);

		if (pnt == NULL)
		pnt = "(nil)";

		printf("%s", pnt);

		if (separator != NULL && 1 != (n - 1))
		printf("%s", separator);
	}
		va_end(param);
		printf("\n");
}
