#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - free list
 * @head: head of list
 * Return: 0.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	if (!head)
		return;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
