#include "main.h"
#include <stdio.h>
/**
 * get_endianness - gets the endianness of a system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *)&i;

	if (ptr[0] == 1)
		return (1);
	else
		return (0);
}
