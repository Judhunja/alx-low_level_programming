#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table, if ht is NULL
 * doesn't print anything
 * @ht: pointer to the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int first;
	hash_node_t *current;

	first = 1;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (!first)
				printf(", ");
			first = 0;
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
