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

		if (!separator)
		printf("%s", pnt);
		
		else if(separator && i == 0)
		printf("%s", pnt);

		else
			printf("%s%s", separator, pnt);
	
	}
	putchar(10);
		
	va_end(param);	
}
