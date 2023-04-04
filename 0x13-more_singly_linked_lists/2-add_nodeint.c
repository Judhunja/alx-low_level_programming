#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of listint_t list
 * @head: pointer to a pointer to the first node of listint_t list
 * @n: data in the new node to be added
 * Return: addrss of new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
}
