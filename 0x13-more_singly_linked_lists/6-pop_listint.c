#include "lists.h"
/**
 * pop_listint - deletes the head node of a singly linked list
 * @head: pointer to pointer to the first node of the linked list
 * Return: n or if the linked list is empty, 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = temp->next;
		data = temp->n;
		free(temp);
	}
	return (data);
}
