#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add new node to beginning of list
 * @head: head of the list
 * @n: number
 * Return:the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = (*head);
	node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = node;

	(*head) = node;

	return (node);
}
