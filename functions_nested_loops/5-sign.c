#include "main.h"

/**
 * print_sign - print a sign of a nnumber
 *
 * @n: value of input
 * Return: 1 and print + for n is greater than 0, 0 and print 0 for n equal 0, -1 and print - for n equal other
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
