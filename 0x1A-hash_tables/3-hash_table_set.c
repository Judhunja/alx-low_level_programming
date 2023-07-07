#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hashtable
 * @key: key
 * value: value associated with key(must be duplicated)
 * Return: 1 if success, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_elem;

	new_elem = malloc(sizeof(hash_node_t));
	index = key_index((unsigned char *)key, ht->size); 

	new_elem->key = malloc(strlen(key) + 1);
	new_elem->value = malloc(strlen(value) + 1);
	strcpy(new_elem->key, key);
	strcpy(new_elem->value, value);

	if (key == NULL || ht == NULL)
		return (0);

	if (new_elem->key == NULL)
	{
		free(new_elem->key);
		free(new_elem->value);
		free(new_elem);
		return (0);
	}

	if (ht->array[index] != NULL)
	{
		new_elem->next = ht->array[index];
		ht->array[index] = new_elem;
		return (1);
	}
	ht->array[index] = new_elem;
	return (1);
}
