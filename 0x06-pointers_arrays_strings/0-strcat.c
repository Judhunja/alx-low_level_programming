#include "main.h"

/**
 *_strcat -concatenates two strings
 *@dest: string
 *@src: string
 *
 *Return: null
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; i <= 4; i++)
	{
		dest[5 + i] = src[i];
	}
	return (dest);
}
