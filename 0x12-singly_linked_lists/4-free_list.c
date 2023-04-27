#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: first node of the linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp);
	}
	free(head);
	free(temp);
}
