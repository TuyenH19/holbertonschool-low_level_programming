#include "main.h"

/**
 * puts2 - print every character of a string
 * @str: string input
 *
 * Return: nothing.
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(*(str + index));
		index += 2;
	}
	_putchar('\n');
}
