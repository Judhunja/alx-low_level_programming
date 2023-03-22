#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to function that prints name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	int i;

	for (i = 0; i <
