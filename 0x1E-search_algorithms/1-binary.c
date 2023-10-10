#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search_r - searches for a value in a sorted array
 * of integers using binary search algorithm
 * @array: pointer to the first element of the array to
 * search in
 * @low: index of where the search should begin
 * @high: index of where the search should stop
 * @value: value to search for
 * Return: index where the searched value is located, otherwise -1
 */

int binary_search_r(int *array, size_t low, size_t high, int value)
{
	size_t i;
	size_t mid = low + (high - low) / 2;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		return (binary_search_r(array, mid + 1, high, value));
	}
	else if (array[mid] > value)
	{
		return (binary_search_r(array, low, mid - 1, value));
	}
	return (-1);
}
/**
 * binary_search - searches for a value in a sorted array
 * of integers using binary search algorithm
 * @array: pointer to the first element of the array to
 * search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where the searched value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_r(array, 0, size - 1, value));
}
