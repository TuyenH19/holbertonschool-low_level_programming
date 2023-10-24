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
		if (index > 0)
		{	
			index = index + 1;
		}
		_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
