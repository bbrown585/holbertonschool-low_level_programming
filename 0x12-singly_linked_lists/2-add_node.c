#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * 
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{	
	if (list_t == NULL)
	{
		printf("size_t node != NUll");
		return;
	}
	struct node* new_node
	= (struct node*)malloc(sizeof(struct node));

	new_node->data = new_data;
	
	new_node->next = list_t->next;

	list_t->next = new_node;
}	
