#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 *
 */

void print_square(int size)
{
	int hight, width;

	if (size > 0)
	{
		for (hight = 1; hight <= size; hight++)
		{
			for (width = 1; width <= size; width++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
