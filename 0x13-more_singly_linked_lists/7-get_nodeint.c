#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: pointer to head node of listint_t
 * @index: index of the node
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *currentnode;

	currentnode = head;

	while (i < index && currentnode != NULL)
	{
		currentnode = currentnode->next;
		i++;
	}
	return (currentnode);
}
