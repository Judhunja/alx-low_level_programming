#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds node at the end of list_t
 * @str: string to be duplicated
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;

	newnode = malloc(sizeof(newnode));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);

	if (*head == NULL)
	{
		*head = newnode;
	}
	else /*we use temp so we don't overwrite the value of head*/
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
