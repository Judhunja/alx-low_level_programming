#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to first node of doubly linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *nextnode = NULL;

	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		nextnode = ptr->next;
		free(ptr);
		ptr = nextnode;
	}
}
