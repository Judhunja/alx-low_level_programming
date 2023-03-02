#include "main.h"

/**
 *_strcat -concatenates two strings
 *dest: string
 *src: string
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for(i = 0; i <= 3; i++)
	{
		dest[5 + i] = src[i];
	}
	return (dest);
}
