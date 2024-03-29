#include "lists.h"
/**
 * free_listint2 - frees a singly linked list
 * @head: pointer to pointer to first node of the linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
