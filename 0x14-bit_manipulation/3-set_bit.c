#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: binary number
 * @index: position to set the value to 1
 * Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*n |= mask;
	return (1);
}
