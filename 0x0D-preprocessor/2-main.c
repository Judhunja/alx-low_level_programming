#include <stdio.h>

/**
 * main - prints the file from which the current file was compiled
 * Return: always 0(Success)
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
