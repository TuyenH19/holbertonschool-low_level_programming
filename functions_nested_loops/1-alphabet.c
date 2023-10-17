/**
 * main - Print alphabet using _putchar
 *
 * Return: Always 0 (Success)
*/

#include "main.h"

void print_alphabet(void)
{

char c;

for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
_putchar('\n');

}
