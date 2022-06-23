#include "function_pointer.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name
 * @name: name
 * @f: pointer
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
