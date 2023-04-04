#include "lists.h"

/**
 * free_listint2 - frees listint2 and sets the head to NULL
 * @head: first node of listint_t
 * Return; void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
