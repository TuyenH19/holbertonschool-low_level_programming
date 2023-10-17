#include "main.h"

/**
 * Description: Create function print_alphabet_x10
 *
 * Param c for char
 * Param i for number of line
 * Return 10 lines of alphabet
 */

void  print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
		i++;
	}
}
