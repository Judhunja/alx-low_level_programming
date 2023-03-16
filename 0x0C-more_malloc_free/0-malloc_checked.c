#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks if malloc has failed and causes normal process
 *		termination with a status value of 98
 * _malloc: allocates memory using malloc
 * @b: pointer to address where memory is to be allocated
 * @c: another pointer
 *
 * Return: b
 *
 */

int *_malloc()
{
	int *ptr = malloc(sizeof(int));

	return (ptr);
}

void *malloc_checked(unsigned int b)
{
	if (_malloc == NULL)
	{
		exit(98);
	}
	return (0);
}
