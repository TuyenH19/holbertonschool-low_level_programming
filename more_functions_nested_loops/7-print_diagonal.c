#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times for character \ to print
 *
 * Return: a diagonal line of character \
 */

void print_diagonal(int n)
{
	int i;

	if (n >= 1)
	{	
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
		} _putchar('\n');
	}
	else
		_putchar('\n');
}
