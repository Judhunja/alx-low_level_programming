#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to function that prints name
 * Return: always 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
