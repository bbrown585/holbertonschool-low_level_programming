#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *location, *new;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		location = ht->array[i];
		while (location)
		{
			new = location;
			location = location->next;
			new(location->key);
			new(location->value);
			new(location);
		}
	}
	free(ht->array);
	free(ht);
}
