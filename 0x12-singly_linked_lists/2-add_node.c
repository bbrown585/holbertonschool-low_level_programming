#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_note - add new node
 * @head: head 
 * @str: string
 * Return: address of element
 */
list_t *add_node(list_t **head, const char *str)
{	
	unsigned int k;
	list_t *node;
	
	node = malloc(sizeof(list_t));

	if (node == NULL)
	return (NULL);

	for (k = 0; str[k] != '\0'  ; k++);
	
	node->len = k;
	node->str = strdup(str);
	node->next = *head;

	(*head) = node;
	return (node);
}	
