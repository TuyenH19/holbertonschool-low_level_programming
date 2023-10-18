#include "main.h"

/**
 * print_last_digit - to print the last digit of a number
 *
 * @c: the value of number input
 * Return: the last digit
 */

int print_last_digit(int c)
{
	int last;
	
	last = c % 10;
	if (c < 0)
	{
		last = last * -1;;
		_putchar(last+ '0');
		return (last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
