#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to binary number
 * @index: position to set the bit value to 0
 * Return: 1 if it worked, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n &= ~mask;
	return (1);
}
