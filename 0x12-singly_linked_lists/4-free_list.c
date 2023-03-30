#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t
 * @head: head of list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *currentnode = head;
	list_t *next_node;

	while (currentnode != NULL)
	{
		next_node = currentnode->next;
		free(currentnode->str);
		free(currentnode);
		currentnode = next_node;
	}
}
