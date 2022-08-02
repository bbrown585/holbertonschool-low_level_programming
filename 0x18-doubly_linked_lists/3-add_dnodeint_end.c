#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of list
 * @n: number
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *newnode = *head;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if ((*head) == NULL)
		(*head) = node;
	else
	{
		while (newnode->next != NULL)
			newnode = newnode->next;

		newnode->next = node;
		node->prev = newnode;
	}

	return (*head);
}

