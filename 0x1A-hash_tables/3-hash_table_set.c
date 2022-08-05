#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash tabel
 * @key:
 * @value:
 * Return: 1 if succeeds, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash, *head;
	unsigned long int index;

	if (!(ht && key && *key && value))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	hash = NULL;

	while (head)
	{
		if (!strcmp(key, head->key))
		{
			char *hashval = strdup(value);
			
			if (!hashval)
				return (0);
			free(head->value);
			head->value = hashval;
			return (1);
		}
		head = head->next;
	}

	if (!hash)
		return (0);
	hash->next = ht->array[index];
	ht->array[index] = hash;
	return (1);
}
