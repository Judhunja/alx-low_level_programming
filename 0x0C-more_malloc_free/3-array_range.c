#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: least element in the array
 * @max: largest element in the array
 *
 *
 * Return: pointer to the newly created array. If malloc fails, returns NULL.
 *	If min > max, retuns NULL
 *
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		min = min + 1;
	}
	return (ptr);
}
