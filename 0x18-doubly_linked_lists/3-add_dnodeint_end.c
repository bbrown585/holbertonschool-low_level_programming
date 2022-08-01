#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_t - adds a new node at the end of a list
 * @head: head of list
 * @n: number
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

