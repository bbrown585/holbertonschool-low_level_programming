#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - prints number of elements
 * @h: head
 *
 * Return: 0 or 1.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
