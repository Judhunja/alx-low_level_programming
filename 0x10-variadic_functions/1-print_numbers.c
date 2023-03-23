#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers, followed by anew line
 * @separator: string to be printed between numbers
 * @n: number of numbers to be printed
 * va_start - initializes and declares arguments in va_list
 * va_arg - retrieves next argument from va_list
 * va_end - cleans up va_list
 * va_list - declares an object that can hold a variable number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (i > 0 && separator != NULL && separator[0] != '\0')
		{
			while (*separator)
				_putchar(*separator++);
		}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	else if (num == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
		(num / 10);
		print_numbers(separator, num / 10);
	}
	_putchar(num % 10 + '0');
	}
	_putchar('\n');
	va_end(args);
}

