#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2 - hash function
 * @str: string for hash value
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int i;

	while ((i = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
