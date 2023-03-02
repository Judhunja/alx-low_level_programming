#include "main.h"

/**
  * _strcmp - checks of two strings are the same
  *
  * @s1: string
  *
  * @s2: string
  *
  * Return: void
  *
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
