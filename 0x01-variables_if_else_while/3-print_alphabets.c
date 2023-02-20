#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* main - prints the alphabet in lowercase, then in upppercase, followed
*	by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

