#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of list
 *
 * Return: number of nodes
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;


	if (!head)
		return;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
