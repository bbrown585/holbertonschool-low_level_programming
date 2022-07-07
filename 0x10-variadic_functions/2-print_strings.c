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
	char *pnt;
	
	va_list param;

	va_start(param, n);

	for (i = 0; i < n; i++)
	{
		pnt = va_arg(param, char *);

		if (!pnt)
		pnt = "(nil)";

		printf("%s", pnt);

		if (separator != NULL && 1 != (n - 1))
		printf("%s%s", separator, pnt);
	}
		printf("\n");
		va_end(param);
		
}
