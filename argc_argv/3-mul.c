#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
