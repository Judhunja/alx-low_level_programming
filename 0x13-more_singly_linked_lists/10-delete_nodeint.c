#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index 'index' of a
 * singly linked list
 * @head: pointer to pointer to the first node of the linked list
 * @index: index of the node that should be deleted
 * Return: 1 if success, 2 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	unsigned int pos;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (pos = 0; pos < index - 1; pos++)
	{
		if (previous == NULL || previous->next == NULL)
			return (-1);
		previous = previous->next;
	}
	current = previous->next;
	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
