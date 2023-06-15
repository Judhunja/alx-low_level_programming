#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a doubly linked list
 * @h: pointer to first element of the doubly linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	unsigned int count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
