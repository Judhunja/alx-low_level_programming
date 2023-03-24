#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: an array of elements
 * @size: size of array
 * @action: pointer to the function used
 * Return: nothing if array or size is NULL
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

