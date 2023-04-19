#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks if malloc has failed and causes normal process
 *		termination with a status value of 98
 * _malloc: allocates memory using malloc
 * @b: pointer to address where memory is to be allocated
 *
 *
 * Return: b
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
