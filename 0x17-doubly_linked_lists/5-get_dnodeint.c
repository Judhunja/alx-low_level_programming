#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the first node of the doubly linked list
 * @index: index of the node to return
 * Return: node_n
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
	{
		return (head);
	}

	while (ptr != NULL && n < index)
	{
		ptr = ptr->next;
		n++;
	}
	return (ptr);
}
