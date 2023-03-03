#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @j: pointer to string
  *
  *
  * Return: j
  *
  */

char *cap_string(char *j)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (j[i] >= 'a' && j[i] <= 'z')
		{
			j[i] = j[i] - 32;
		}
	}
	return (j);
}
