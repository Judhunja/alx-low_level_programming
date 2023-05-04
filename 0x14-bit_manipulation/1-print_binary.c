#include "main.h"
#include <stdbool.h>
/**
 * print_binary - prints binary representation of a number
 * @n: binary number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	bool printing = false;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			printing = true;
		}
		else if (printing)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
