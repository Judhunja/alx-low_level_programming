#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: binary number
 * @index: position of the bit you want to get
 * Return: bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	return ((n & mask) ? 1 : 0);
}
