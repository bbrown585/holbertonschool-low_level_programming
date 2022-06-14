#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: num
 * @argv: name
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int multiply_num = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiply_num = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply_num);
		return (0);
	}
}
