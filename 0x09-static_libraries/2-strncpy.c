#include "main.h"

/**
  * _strncpy - copies a string to another string
  * @dest: one string
  *
  * @src: another string
  *
  * @n: number of characters to be copied
  * Return: void
  *
  *
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	dest[i] = '\0';
	return (dest);
}
