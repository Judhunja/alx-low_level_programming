#include "3-calc.h"
#include <string.h>

/**
 * main - calculates result of operations based on specified operators
 * @argc: no of args
 * @argv: args passed to function
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	char *operator;
	int operand1, operand2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);

	if ((strcmp(operator, "/") == 0 || strcmp(operator,
					"%") == 0) && operand2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(operator);

	if (operation != NULL)
	{
		int result = operation(operand1, operand2);

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (99);
	}

	return (0);
}
