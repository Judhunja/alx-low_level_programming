#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *s;
	char *separator;

	va_start(args, format);
	separator = "";
	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(s, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(s, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(s, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
