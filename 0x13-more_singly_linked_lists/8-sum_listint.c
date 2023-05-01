#include "lists.h"
/**
 * sum_listint - returns sum of all the data of a listint_t list
 * @head: first node of the singly linked list
 * Return: sumdata or if the list is empty, 0
 */
int sum_listint(listint_t *head)
{
	int sumdata = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sumdata += temp->n;
		temp = temp->next;
	}
	return (sumdata);
}
