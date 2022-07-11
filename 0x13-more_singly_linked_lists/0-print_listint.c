#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements
 * @h: head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int node;

	for (node = 0; h; node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
