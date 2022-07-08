#include <stdlib.h>
#include "lists.h"


/**
 * list_len - number of elements in a link
 * @h: head of list
 * Return: 0.
 */
size_t list_len(const list_t *h)
{
	int node = 0;

	while (h)
	{
		node += 1;
		h = h->next;
	}
	return (node);
}
