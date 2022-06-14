#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name
 * @argv: name
 * @argc: number
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc)
	printf("%s\n", argv[0]);
	return (0);
}
