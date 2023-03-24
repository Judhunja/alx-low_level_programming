#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers, followed by anew line
 * @separator: string to be printed between numbers
 * @n: number of numbers to be printed
 * va_start - initializes and declares arguments in va_list
 * va_arg - retrieves next argument from va_list
 * va_end - cleans up va_list
 * va_list - declares an object that can hold a variable number of
 * arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

