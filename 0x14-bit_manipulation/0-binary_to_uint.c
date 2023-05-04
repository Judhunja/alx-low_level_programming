#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary number
 * Return: unint, or 0 if there is one or more chars in string b
 * that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	char *endptr;

	unsigned int decimal = strtol(b, &endptr, 2);

	if (b == NULL)
		return (0);
	if (*endptr != '\0')
		return (0);

	return (unsigned int decimal);
}
