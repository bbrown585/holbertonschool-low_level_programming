#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * list_len - number of elements in a link
 *
 * Return: 0.
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;
	const list_t *temp;

	temp = h;

	while (temp)
	{
		temp = temp->next;
	}
	return (node);
}
