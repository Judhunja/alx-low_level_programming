#include "main.h"
/**
 * _atoi - converts integer literals to numbers
 * @s: string to convert to numbers
 * Return: number
 */
int _atoi(char *s)
{
	int sign = -1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result += result * 10 + s[i] - '0';
		i++;
	}
	return (sign * result);
}
