#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: first node of the listint_t list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *nextnode;

	while (temp != NULL)
	{
		nextnode = temp->next;
		free(temp);
		temp = nextnode;
	}
}
