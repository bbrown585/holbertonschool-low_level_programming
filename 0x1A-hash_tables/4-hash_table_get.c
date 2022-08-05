#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value with a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hash = ht->array[index];

	hash = ht->array[index];
	while (hash != NULL)
	{
		if (strcmp(hash->key, key) == 0)
		{
			return (hash->value);
		}
	hash = hash->next;
	}

return (NULL);
}
