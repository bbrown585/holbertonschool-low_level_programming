#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - index of key
 * @key: key
 * @size: size of array
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
