#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a singly linked
 * list
 * @head: first node of the linked list
 * @str: string to be duplicated
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newnode;
	temp = *head;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
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
