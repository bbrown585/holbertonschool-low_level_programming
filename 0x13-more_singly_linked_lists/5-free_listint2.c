#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of list
 *
 * Return: 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *newnode;
	listint_t *node;

	if (!head)
		return;
	newnode = *head;

	while (newnode)
	{
		node = newnode;
		newnode = newnode->next;
		free(node);
	}
	*head = NULL;
}
