#include "main.h"
/**
 * _strpbrk - searches for the first occurrence of a character
 * in the string 'accept' inside of the string 's'
 * @s: string to search
 * @accept: string whose characters are to be searched in 's'
 * Return: pointer to the first char of 'accept' that is in 's'
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *current = accept;

		while (*current)
		{
			if (*current == *s)
				return ((char *)s);
			current++;
		}
		s++;
	}
	return (NULL);
}
