#include "main.h"

/**
  * _strncat - concatenates two stringd
  * @dest: maybe a pointer to a string, i dont know
  * @src: mmsdnib
  *
  * @n: number of bytes from src to be appended onto dest
  *
  * Return: a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[5 + i] = src[i];
	}
	return (dest);
}
