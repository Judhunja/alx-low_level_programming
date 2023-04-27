#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: first node of the linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *next_node;

	temp = head;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		free(temp->str);
		temp = next_node;
	}
}
