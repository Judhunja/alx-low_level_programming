#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer to pointer to first node of the doubly linked list
 * @n: data to be contained in the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->n = n;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
		newnode->next = *head;
	}
	else
	{
		newnode->next = NULL;
	}
	*head = newnode;

	return (newnode);
}
