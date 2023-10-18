#include "main.h"

/**
 * print_alphabet - Create function print_alphabet using _putchar
 */

void print_alphabet(void)
{

char c;

for (c = 'a'; c <= 'z'; c++)
        _putchar(c);
_putchar('\n');

}

/**
 * print_alphabet_x10 - Create function print_alphabet_x10
 *
 * Return 10 lines of alphabet
 */

void  print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		print_alphabet();
		i++;
	}
}
