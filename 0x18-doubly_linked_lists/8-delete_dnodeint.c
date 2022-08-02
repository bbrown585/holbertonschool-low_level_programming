#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of linked list
 * @head: head of list
 * @index: index of list
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	temp = (*head);
	if (temp == NULL)
		return (-1);
	for (i = 0; index != i; i++)
	{
		temp = temp->next;
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	if (index == 0)
		(*head) = temp->next = temp->next;
	free(temp);
	return (1);
}
