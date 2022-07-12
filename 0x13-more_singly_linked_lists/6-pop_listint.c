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
	listint_t *temp = *head;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	(*head) = (*head)->next;
	free(temp);
	return (i);
}
