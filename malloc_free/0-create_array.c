#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create am array of chars with specific char
 * @size: size of array
 * @c: specific char
 *
 * Return: an array of chars c
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size + 1);

	if (!s)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(s + i) = c;
		i++;
	}
	s[size] = '\0';
	return (s);
}
