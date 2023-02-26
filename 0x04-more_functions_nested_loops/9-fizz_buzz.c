#include "main.h"
#include <stdio.h>

/**
 * main - for multiples of three prints Fizz, for multiples of five prints Buzz
 *	instead of the number and for multiples of both three and five prints
 *	FizzBuzz instead of the number
 * Return: always 0 (success)
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 != 0)
		{
			printf("Fizz");
		}
		else if (j % 5 == 0 && j % 3 != 0)
		{
			printf("Buzz");
		}
		else if (j % 3 == 0 && j % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (j == 1)
		{
			printf("%d", j);
		}
		else
		{
			printf("%d", j);
		}

		printf("\n");

		return (0);
	}
}
