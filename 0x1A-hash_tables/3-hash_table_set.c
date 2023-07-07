#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hashtable
 * @key: key
 * @value: value associated with key(must be duplicated)
 * Return: 1 if success, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elem;
	hash_node_t *current;
	unsigned int index;
	char *new_val;

	if (key == NULL || ht == NULL || value == NULL
			|| key[0] == '\0' || strcmp(key, "") == 0)
		return (0);

	new_elem = malloc(sizeof(hash_node_t));
	index = key_index((unsigned char *)key, ht->size);
	if (new_elem == NULL)
		return (0);
	new_elem->key = strdup(key);
	new_elem->value = strdup(value);
	new_elem->next = NULL;
	if (new_elem->key == NULL || new_elem->value == NULL)
	{
		free(new_elem);
		return (0);
	}
	if (ht->array[index] == NULL)
		ht->array[index] = new_elem;
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			new_val = strdup(value);
			if (new_val == NULL)
				return (0);
			current->value = new_val;
			return (1);
		}
		current = current->next;
	}
	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;
	return (1);
}