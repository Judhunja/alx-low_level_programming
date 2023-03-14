#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - prints all arguments it receives
  *
  * @argc: number of arguments passed
  * @argv: pointer to argument string
  *
  * Return: always 0 (success)
  *
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
