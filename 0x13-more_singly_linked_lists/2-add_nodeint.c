#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - add node
 * @head: head of the list
 * @n: numbers
 * Return: @ of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	return (NULL);

	node->n = n;
	node->next = *head;

	(*head) = node;
	return (node);
}
