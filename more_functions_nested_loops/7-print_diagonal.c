#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times for character \ to print
 *
 * Return: a diagonal line of character \
 */
void print_diagonal(int n)
{
	int space, line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
