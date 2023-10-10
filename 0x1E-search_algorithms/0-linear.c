#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - searches for a value in an array of ints
 * using linear search algorithm
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of the found elements, otherwise zero
 */
int linear_search(int *array, size_t size, int value)
{
	size_t now = 0;

	if (array == NULL)
		return (-1);

	while (now < size)
	{
		printf("Value checked array[%lu] = [%d]\n", now, array[now]);
		if (array[now] == value)
		{
			return (now);
		}
		now++;
	}
	return (-1);
}
