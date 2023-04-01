#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of list_t
 * @str: string to be duplicated
 * @head: head of list_t
 * Return: address of the new node, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;
		return (newnode);
}
