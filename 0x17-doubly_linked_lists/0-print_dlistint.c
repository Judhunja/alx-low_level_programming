#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the first node of the doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	unsigned int count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
