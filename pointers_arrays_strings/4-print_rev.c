#include "main.h"

/**
 * _strlen - to print the length of a string
 * @s: string input
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int len;
	char *ptr;

	ptr = s;
	len = 0;
	while (*ptr != 0)
	{
		len++;
		ptr++;
	}
	return (len);
}
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string input
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	char *end = s + len - 1;

	while (*end != 0)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
