#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the sizes of various data types
 * printf - outputs the sizes of the data types
 * Return: always 0 (success)
 */

int main(void)
{
	printf("Size of char : %ld byte(s)\n", sizeof(char));
	printf("Size of int : %ld byte(s)\n", sizeof(int));
	printf("Size of long int : %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int : %ld byte(s)\n", sizeof(long long int));
	printf("Size of float : %ld byte(s)\n", sizeof(float));
	return (0);
}
