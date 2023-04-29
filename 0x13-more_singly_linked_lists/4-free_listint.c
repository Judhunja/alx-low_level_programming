#include "lists.h"
/**
 * free_listint - frees a singly linked list
 * @head: pointer to the first node of the singly linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *nextnode;

	while (temp != NULL)
	{
		nextnode = temp->next;
		free(temp);
		temp = nextnode;
	}
}
