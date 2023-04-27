#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of list_t
 * @head: first node of list_t
 * @str: string to be duplicated
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
