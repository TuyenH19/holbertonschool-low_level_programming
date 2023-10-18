#include "main.h"

/**
 * print_last_digit - to print the last digit of a number
 *
 * @c: the value of number input
 * Return: the last digit
 */

int print_last_digit(int c)
{
	if (c < 0)
	{
		c = -c;
		return (c % 10);
	}
	else
		return (c % 10);
}
