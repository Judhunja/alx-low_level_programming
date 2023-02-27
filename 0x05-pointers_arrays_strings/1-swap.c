#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: integer whose value is to be swapped
 * @b: integer whose value is to be swapped
 * return - a and b
 *
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
