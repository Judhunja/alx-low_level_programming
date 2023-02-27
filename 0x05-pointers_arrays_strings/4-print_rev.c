#include "main.h"

/**
  * print_rev - prints a string in reverse, followed by a new line
  *
  * @s: string to be printed in reverse
  *
  */

void print_rev(char *s)
{
	int strev = 0;
	int j;

	while (*s != '\0')
	{
		strev++;
		s++;
	}
	s--;
	for (j = strev; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
