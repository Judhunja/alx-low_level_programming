#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  *
  * @argc: number of arguments
  * @argv: pointer to argument string
  *
  * Return: 0 if success, 1 if error
  *
  *
  */

int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused))
		)
{
	int a, b;

	int i;

	for (i = 0; i <= 2; i++)
	{
		{
			scanf("%d %d", &a, &b);
		}
	}
		printf("%d\n", a * b);
		return (0);
}
