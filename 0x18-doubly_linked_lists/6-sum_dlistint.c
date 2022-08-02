#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a linked list
 * @head: head of list
 *
 * Return: 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
	sum = sum + head->n;
	head = head->next;
	}
	return (sum);
}

