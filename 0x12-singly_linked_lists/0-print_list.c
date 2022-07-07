#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements 
 *
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	const list_t *temp;

	temp = h;

	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[0](nil)\n");
			node++;
		}
		else
		{
		printf("[%u] [%s]\n", temp-> len, temp->str);
		node++;
		}
		temp = temp ->next;
	}
	return (node);
}
