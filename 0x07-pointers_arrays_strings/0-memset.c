#include "main.h"

/**
  * _memset - fills the memory with a constant byte
  * @n: number of bytes to be filled
  * @s: pointer to the memory location
  * @b: constant byte to fill the memory area
  *
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[n] = 'b';
	}
	return (s);
}

