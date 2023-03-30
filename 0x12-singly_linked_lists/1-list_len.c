#include "lists.h"

/**
 * list_len - returns number of elements in list_t
 * @h: head of list_t
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
