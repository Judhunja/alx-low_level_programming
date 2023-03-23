#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to function?
 * va_start - declares and initializes the va_list objects
 * va_list - contain argument objects
 * va_arg - retrives the next argument in the variable argument list of
 * sum_them_all
 * Return: sum of the parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
 	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
