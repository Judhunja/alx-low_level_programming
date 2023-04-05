#include "lists.h"

/**
 * sum_listint - returns sum of all the data of a listint_t list
 * @head: pointer to first node of listint_t
 * Return: sum of all the data of listint_t, if empty returns 0
 */

int sum_listint(listint_t *head)
{
	listint_t *nexnode;
	int sumdata = 0;
	nextnode = head;

	while (head != NULL)
	{
		nexnode = head->next;
		head = nextnode;
		sumdata += head->n;

