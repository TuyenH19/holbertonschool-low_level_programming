#include "main.h"

/**
 * print_most_numbers - to print all digit from 0 to 9 except 2 and 4
 *
 * Return: print numbers followed with new line
 */

void print_most_numbers(void)
{
	char c;
	
	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		_putchar(c + '0');
	}
	_putchar('\n');
}
