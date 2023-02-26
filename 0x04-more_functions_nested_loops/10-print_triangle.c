#include "main.h"

/**
 * print_triangle - prints a triangle
 * _putchar - inputs a single character
 * @size: size of the triangle
 * Return: always 0 (success)
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j, k;

		for (j = 1; j <= size; j++)
		{
			for (k = j; k < size; k++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= j; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
