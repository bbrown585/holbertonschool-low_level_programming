#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: count
 * @argv: name
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
		{
			if (argv[j][i] < '0' || argv[j][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
