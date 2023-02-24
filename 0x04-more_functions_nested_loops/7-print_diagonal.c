#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * _putchar - prints '\' character
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		for (j = 1; j <= n; j++)
		{
			_putchar('\\');
		}
	_putchar('\n');
	}
}
