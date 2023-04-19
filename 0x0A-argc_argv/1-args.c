#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: number of arguments
  * @argv: pointer to arguments string
  *
  *
  * Return: always 0 (success)
  *
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	int count = -1;

	for (i = 0; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
