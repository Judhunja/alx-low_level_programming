#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: first node of the linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next_node;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp->str);
		free(temp);
		temp = next_node;
	}
}
