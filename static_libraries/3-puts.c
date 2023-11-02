#include "main.h"

/**
 * _puts - print a string followed by a new line to stdout
 * @str: string input
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	int position;
	char *ptr;

	ptr = str;
	position = 0;
	while (*ptr != 0)
	{
		_putchar(*(str + position));
		position++;
		ptr++;
	}
	_putchar('\n');
}
