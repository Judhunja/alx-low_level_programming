#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of 'nmemb' elements of 'size' bytes
 *	each and returns a pointer to the allocated memory
 *
 * @nmemb: number of elements of the array
 * @size: number of bytes of each element in the array
 *
 * Return: pointer to allocated memory if success, NULL if failure
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
