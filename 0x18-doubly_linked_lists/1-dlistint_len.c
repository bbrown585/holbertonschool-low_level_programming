#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - number of emelents in a linked list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node = 0;

	while (h)
	{
		node += 1;
		h = h->next;
	}
	return (node);
}

