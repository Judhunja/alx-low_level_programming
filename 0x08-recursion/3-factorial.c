#include "main.h"

/**
  *factorial - calculates the factorial of a given number
  *
  * @n: a given number
  *
  * Return: factorial of number or -1 to indicate error
  *
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
