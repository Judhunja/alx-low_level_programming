#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to first node of the doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: data to be stored in the new node
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *h;
	unsigned int i = 0;

	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (i < idx - 1 && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = ptr->next;
	newnode->prev = ptr;

	if (ptr->next != NULL)
		ptr->next->prev = newnode;
		
	ptr->next = newnode;
	return (newnode);
}
