#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the hash table(array)
 * Return: Pointer to the created hash table or NULL if
 * something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!size || table == NULL)
	{
		return (NULL);
	}

	table->size = size;

	table->array = calloc(table->size, sizeof(hash_node_t *));

	return (table);
}
