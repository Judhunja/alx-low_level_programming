#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at 'index'
 * in a doubly linked list
 * @head: pointer to pointer to first node of the linked list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	while (n < index && ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}
	if (ptr == NULL)
		return (-1);
	if (ptr->next != NULL)
	{
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
	}
	else
	{
		ptr->prev->next = NULL;
	}
	free(ptr);
	return (1);
}
