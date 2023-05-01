#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a given position in
 * the singly linked list
 * @head: pointer to the first node of the linked list
 * @index: position of the specified node
 * Return: current node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentnode;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	currentnode = head;

	for (i = 0; i < index - 1; i++)
	{
		while (currentnode->next != NULL && currentnode != NULL)
		{
			currentnode = currentnode->next;
		}
	}
	return (currentnode);
}
