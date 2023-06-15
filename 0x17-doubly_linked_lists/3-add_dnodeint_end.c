#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to pointer to first node of the doubly linked list
 * @n: data to store in newnode
 * Return: newnode or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newnode;
		newnode->prev = ptr;
	}
	else
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	return (newnode);
}
