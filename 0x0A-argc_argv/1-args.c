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

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%d\n", atoi(argv[i]));
	}
	return (0);
}
