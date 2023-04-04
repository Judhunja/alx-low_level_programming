#include "lists.h"

/**
 * pop_listint - deletes node of a listint_t list
 * @head: pointer to pointer to first node of listint_t list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);
}
