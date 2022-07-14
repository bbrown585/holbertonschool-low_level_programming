#include <stdio.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: head of list
 * Return: 0.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
