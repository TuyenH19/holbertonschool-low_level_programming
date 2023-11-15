#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to operate the arguments input
 * @argc: number of arguments input
 * @argv: array of arguments
 *
 * Return: result of operation
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int (*operation)(int, int);

	operation = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if ((*op == '/' && num2 == 0) ||
		(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(num1, num2));
	return (0);
}
