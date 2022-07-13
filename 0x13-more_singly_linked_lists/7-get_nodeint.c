#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return nth node
 * @head: head of the list
 * @index: index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int j = 0;

	if (head == NULL)
	return (NULL);

	while (head != NULL)
	{
	if (index == j)
	{
	node = head;
	return (node);
	}
	j++;
	head = head->next;
	}
	return (NULL);
}
