#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with a constant byte
 * @s: string input
 * @b: constant
 * @n: first n byte of memory
 *
 * Return: string that has been filled with a constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
