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
	int i;

	for (i = 0; dest[5] != '\0' && i < n; i++)
	{
		src[i] = dest[i];
	}
	src[i] = '\0';
}
