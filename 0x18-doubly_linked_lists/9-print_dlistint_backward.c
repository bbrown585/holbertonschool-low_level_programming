#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint_backward - prints all the elements of a list backward.
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t node_count;
	const dlistint_t *temp;

	temp = h;
	if (h == NULL)
		return (0);
	for (node_count = 0; temp->next != NULL ; )
	{
		temp = temp->next;
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
		node_count++;
	}
	return (node_count);
}
