#include "main.h"
/**
  * _puts_recursion - prints a string followed by a new line
  * with recursion
  * @s: string
  * Return: always 0 (success)
  */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
