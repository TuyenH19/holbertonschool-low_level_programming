#include "main.h"

/**
 * print_line - to print stright line
 * @n: the number of character _
 *
 * Return: line with n times of _ character
 */

void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
