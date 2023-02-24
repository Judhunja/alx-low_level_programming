#include "main.h"

/**
 * print_line - prints out a straight line
 * @n: number of times '_' should be printed
 * _putchar - outputs a characteri and prints a new line if needed
 * Return: void
 */

void print_line(int n)
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
			_putchar('_');
		}
		_putchar('\n');
	}
}
