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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
