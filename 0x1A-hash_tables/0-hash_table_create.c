#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array
 *
 * Return: hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (size < 1)
		return (NULL);
	hash = malloc(sizeof(hash_table_t));

	if (!hash)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);

	return (hash);
}

