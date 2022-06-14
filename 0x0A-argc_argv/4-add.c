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

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; i++)
		{
			if (argv[j][i] < '0' || argv[j][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
