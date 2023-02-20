#include <stdio.h>
#include <stdlib.h>

/**
* main - prints alphabet in lowercase followed by a new line
* Return: Always 0
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
