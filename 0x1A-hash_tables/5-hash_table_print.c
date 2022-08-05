#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 *
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int flag = 0;
	hash_node_t *location;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		location = ht->array[i];
		while (location)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", location->key, location->value);
			flag = 1;
			location = location->next;
		}
	}
}
