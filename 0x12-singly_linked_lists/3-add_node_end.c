#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_edn -
 * @head: head
 * @str: string
 *
 *  Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i;
	
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	return (NULL);
	
	for (i =
	
