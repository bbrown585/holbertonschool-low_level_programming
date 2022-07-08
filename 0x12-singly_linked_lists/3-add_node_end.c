#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list.
 * @head: head
 * @str: string
 *
 *  Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *node;
	unsigned int i;

	node = *head;
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (i = 0; str[i] != '\0' ; i++)
	;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = NULL;

	if ((*head) == NULL)
	{
	*head = newnode;
	return (newnode);
	}
	while (node->next != NULL)
	node = node->next;

	node->next = newnode;
		return (newnode);
}
