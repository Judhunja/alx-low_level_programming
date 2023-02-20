#include <stdio.h>

/**
* main - prints alphabet in lowercase and in reverse followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
