#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint_backward - prints all the elements of a list backward.
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
unsigned int node;

for (node = 0; h; node++)
{
printf("%d\n", h->n);
h = h->next;
}
return (node);
}
