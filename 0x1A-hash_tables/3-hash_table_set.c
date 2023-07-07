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
	hash_node_t *new_elem, *current;
	unsigned int index;

	if (key == NULL || ht == NULL)
		return (0);

	new_elem = malloc(sizeof(hash_node_t));
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	new_elem->key = strdup(key);
	new_elem->value = strdup(value);

	if (new_elem->key == NULL)
	{
		free(new_elem->key);
		free(new_elem->value);
		free(new_elem);
		return (0);
	}

	if (current == NULL)
	{
		ht->array[index] = new_elem;
	}
	else
	{
		if (strcmp(current->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			new_elem->next = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = new_elem;
		}
	}
	return (1);
}
