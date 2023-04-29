#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: first node of the linked list
 * Return: no_of_elements
 */
size_t listint_len(const listint_t *h)
{
	size_t no_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		no_of_elements++;
	}
	return (no_of_elements);
}
