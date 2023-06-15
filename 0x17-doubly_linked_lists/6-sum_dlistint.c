#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a doubly linked list
 * @head: pointer to the first node of the doubly linked list
 * Return: sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *next = NULL;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		next = ptr->next;
		sum += ptr->n;
		ptr = next;
	}
	return (sum);
}
