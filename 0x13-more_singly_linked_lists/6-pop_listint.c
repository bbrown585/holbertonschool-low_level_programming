#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - delete the head of a linked list
 * @head: head of list
 * Return:0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i = 0;

	if (!(*head))
		return (0);
	i += (*head)->n;
	node = *head;
	free(node);
	return (i);
}
