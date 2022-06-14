#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments
 * @argc: num count
 * @argv: name
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
