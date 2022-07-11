#ifndef MORE_LINKED_LISTS
#define MORE_LINKED_LISTS

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct listint_t - more singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to next node
 */
typedef struct listint_t
{
	unsigned int n;
	struct listint_t *next;
} listint_t;


size_t print_listint(const listint_t *h);

#endif
