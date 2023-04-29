#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a singly
 * linked list
 * @head: a pointer to a pointer to the first node of the linked
 * list
 * @n: data to be stored in the new node
 * Return: address of the new element, or null if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
