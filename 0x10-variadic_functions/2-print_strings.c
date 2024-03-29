#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: space to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *s;

	va_start(args, n);

	while (i < n)
	{
		s = va_arg(args, char *);

		if (s == NULL)
		{
			s = "(nil)";
		}
		printf("%s", s);
		while (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

