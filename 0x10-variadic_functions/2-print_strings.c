#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * printf - prints "nil" if string is null
 * va_start - initializes and declares arguments in va_list
 * va_arg - retrieves next argument from va_list
 * va_end - cleans up va_list
 * va_list - declares an object that can hold a variable number of
 * arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", s);
		if (s == NULL)
		{
			s = "(nil)";
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
