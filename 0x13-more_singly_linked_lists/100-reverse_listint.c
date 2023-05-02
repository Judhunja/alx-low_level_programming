#include "lists.h"
/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to pointer to the first node of the listint_t
 * list
 * Return: pointer to the fuirst node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = nxt;
	}
	*head = temp;
	return (*head);
}
