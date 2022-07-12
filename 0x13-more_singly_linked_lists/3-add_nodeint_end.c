#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head of list
 * @n: int for new node
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *node;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	node = *head;
	while (node->next)
	{
		node = node->next;
	}
	node->next = newnode;
	return (newnode);
}
