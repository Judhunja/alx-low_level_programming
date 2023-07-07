#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key to search
 * Return: value associated with the key,
 * or NULL if the key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
