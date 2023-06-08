#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array and initializes it with a specific char
 * @size: number of elements to be created in the array
 * @c: character to initialize the array with
 * Return: pointer to the array or NULL if it failed
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
