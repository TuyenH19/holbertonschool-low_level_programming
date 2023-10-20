#include "main.h"

/**
 * print_numbers - to print numbers from 0 to 9
 * @c: character input (we are allowed to use _putchar only)
 *
 * Return: number from 0 to 9 followd by new line
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);

	_putchar('\n');
}
