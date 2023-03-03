#include "main.h"

/**
  * string_toupper - changes lowercase letters to uppercase
  *
  * @j: pointer to a string
  * Return: j
  *
  */

char *string_toupper(char *j)
{
	int i;

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] >= 'a' && j[i] <= 'z')
		{
			j[i] = j[i] - 32;
		}
	}
	return (j);
}
