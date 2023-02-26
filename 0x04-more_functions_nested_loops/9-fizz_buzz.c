#include "main.h"
#include <stdio.h>

/**
 * main - for multiples of three prints Fizz, for multiples of five prints Buzz
 *	and for multiples of both three and five prints FizzBuzz
 * Return: void
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if (j % 3 == 0 && j % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else
		{
			printf("\n");
		}
	}
}
