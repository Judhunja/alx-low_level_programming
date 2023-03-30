#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints elements of list_t
 * @h: head of list_t
 * Return: number of nodes, if str is NULL, prints [0] (nil)
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
