#include "lists.h"

/**
 * listint_len - prints number of elements in a linked list
 * @h: first node of listint_t list
 * Return: number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

