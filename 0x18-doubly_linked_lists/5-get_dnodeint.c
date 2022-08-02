#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_t - return the nth node of a linked list
 * @head: head of list
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	whle (head != NULL)
	{
	if (index == j)
	{
	node = head;
	return (node);
	}
	i++;
	head = head->next;
	}
	return (NULL);
}
