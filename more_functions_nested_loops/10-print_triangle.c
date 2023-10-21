#include "main.h"


/**
 * print_triangle - to print a triangle with #
 * @size: the size of triangle
 *
 */

void print_triangle(int size)
{
	int hight, width;

	if (size > 0)
	{
		for (hight = 1; hight <= size; hight++)
		{
			for (width = 1; width <= size; width++)
			{
				if (width >= (size + 1 - hight))
				{
					_putchar('#');
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
