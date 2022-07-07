#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_all - prints anything
 *
 *
 * Return: an int
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *ptr = "";
	va_list var;

	va_start(var, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i';
				printf("%s%d", ptr, va_arg(var, int));
